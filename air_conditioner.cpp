//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 922337203685477
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
      ll l[300005],r[300005],c[300005];
      cin>>tc;
      while(tc--)
      {
          cin>>n>>k;
          vi v1,v2;
          unordered_map<ll,ll>mp;
          f(i,k)
           cin>>u,v1.pb(u-1);
           f(i,k)
           cin>>v,v2.pb(v);
          f(i,k)
            mp[v1[i]]=v2[i];


          f(i,n)
          {
              if(mp.find(i)==mp.end()) c[i]=inf;
              else c[i]=mp[i];
          }
         // fout(i,c,n);cout<<endl;
          f(i,n)
          {
              if(i==0)
              l[i]=c[i];
             else
            l[i]=min(l[i-1]+1,c[i]);

          }
        //  fout(i,l,n);cout<<endl;
          for(i=n-1;i>=0;i--)
          {
              if(i==n-1) r[i]=c[i];
              else r[i]=min(r[i+1]+1,c[i]);
          }
          f(i,n) cout<<min(l[i],r[i])<<" ";
          cout<<endl;


      }








}




