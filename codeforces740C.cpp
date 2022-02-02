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
bool comp(pr x,pr y)
{
    if(x.first<y.first) return 1;
    if(x.first==y.first) return x.second>y.second;
    return 0;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          vi vct[n+2];
          vector<pr>v1;
          f(i,n)
          {
              cin>>k;
              f(j,k)
              {
                  cin>>u;
                  vct[i].pb(u);
              }
              ll idx=0,mx=-inf+45;
              f(j,k)
              {
                 if(vct[i][j]>mx)
                 {
                     mx=vct[i][j];
                     idx=j;
                 }
              }
              if(idx==0)
               v1.pb({mx+1,k});
              else  v1.pb({mx-idx+1,k});

          }
          sort(v1.begin(),v1.end(),comp);
          ll power=0,ans=0;
          f(i,n)
          {
              u=v1[i].first;v=v1[i].second;
              if(i==0)
             {power=ans=u;
             power+=v;}
             else
             {
                 if(power>=u)
                    power+=v;
                 else
                 {
                     ans=ans+u-power;
                     power=u+v;
                 }
             }


          }
          f(i,n) cout<<v1[i].first<<" "<<v1[i].second<<endl;
          cout<<ans<<endl;

      }








}




