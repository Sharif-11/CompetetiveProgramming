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
 vi vct[200005];
 ll arr[200005];
 void divisors(ll n)
 {
     ll i,j;
     for(i=1;i<=n;i++)
     {
         for(j=i;j<=n;j+=i)
            {
                vct[j].pb(i);
            }
     }
 }
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      vi ans;
      divisors(200000);
      cin>>n>>m;
      map<ll,ll>mp;
      f(i,n)
      {
         cin>>arr[i];
         u=arr[i];
         ll sz=vct[u].size();
         f(j,sz)
         {
                ll v=vct[u][j];
                if(v>1) mp[v]=1;

         }
        // cout<<endl;
      }
      for(i=1;i<=m;i++)
      {
          ll j,sz=vct[i].size();
          ll flag=0;
          f(j,sz)
          {
              ll v=vct[i][j];
              if(mp.find(v)!=mp.end()) flag=1;
          }
          if(flag==0) ans.pb(i);
      }
      ll sz=ans.size();
      cout<<sz<<endl;
      f(j,sz) cout<<ans[j]<<endl;












}




