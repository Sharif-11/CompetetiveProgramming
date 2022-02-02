//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,a,i,b,j,k,t,x,y,z,tc,u,v,w
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
ll n;
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll arr[10005];
      cin>>tc;
      while(tc--)
      {

           cin>>n;
           fin(i,arr,n);
           if(arr[n-1]==0||arr[0]==1)
           {
               for(i=1;i<=n+1;i++) cout<<i<<" ";
               cout<<endl;
           }
           else
           {
               ll idx=0;
               for(i=0;i<n-1;i++)
               {
                   if(arr[i]==0&&arr[i+1]==1)
                   {
                       idx=i+1;
                       break;
                   }
               }
               if(idx==0)
                cout<<-1<<endl;
               else
               {
                   for(i=1;i<=idx;i++)
                    cout<<i<<" ";
                   cout<<n+1<<" ";
                   for(i=idx+1;i<=n;i++)
                    cout<<i<<" ";
                   cout<<endl;
               }

           }


      }








}




