//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll n,m,a,i,b,j,k,t,x,y,z,tc,u,v,w
#define f(i,n) for(i=0;i<n;i++)
#define mem(a,x) memset(a,x,sizeof(a))
#define sortt(v)  sort(v.begin(),v.end())
#define sitr(itr,st) for(auto itr=st.begin();itr!=st.end();itr++)
#define pr pair<ll,ll>
#define pi acos(-1.00)
#define mod 1000000007
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tr(exp)  exp?yes:no
#define flush fflush(stdout)
#define el cout<<endl
#define ell endl
#define inp(a) scanf("%lld",&a)
using namespace std;
typedef long long ll;
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll arr[150],arr2[150];
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          fin(i,arr,n);fin(i,arr2,n);
          ll cnt=0,flag=0;
          vector<pr>vct;
          while(1)
          {   ll idx1=-1,idx2=-1;
              f(i,n)
              {
                 if(arr[i]>arr2[i])
                    idx1=i;
                 else if(arr[i]<arr2[i])
                    idx2=i;
              }

              if(idx1==-1||idx2==-1)
                break;
               arr[idx1]--;
               arr[idx2]++;
               vct.pb({idx1+1,idx2+1});
               cnt++;
               if(cnt==100) break;

          }
          f(i,n)
          {
              flag+=(arr[i]!=arr2[i]);
          }
          if(flag) cout<<-1<<endl;
          else
          {

              cout<<vct.size()<<endl;
              f(i,vct.size())
              cout<<vct[i].first<<" "<<vct[i].second<<endl;
          }


      }








}




