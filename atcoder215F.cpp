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
map<ll,ll>mx,my;
vi v1,v2;
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n;
      f(i,n)
      {
          cin>>u>>v;
          if(mx.find(u)==mx.end()) mx[u]=v;
          else mx[u]=max(mx[u],v);
          if(my.find(v)==my.end()) my[v]=u;
          else my[v]=max(my[v],u);
      }
      sitr(itr,mx) v1.pb(itr->first);
      sitr(itr,my) v2.pb(itr->first);
      ll ans=0;
      ll l=0;
      ll sz=v1.size();
      for(i=0;i<sz;i++)
      {
          u=v1[i]-v1[l];
          v=mx[v1[i]];
          if(v>=u)
            ans=max(ans,u);
          else
          {
              while(l<i)
              {
                  l++;
                  u=v1[i]-v1[l];
                  if(v>=u)
                    break;
              }
          }
      }
      l=0;
      sz=v2.size();
      f(i,sz)
      {
          u=v2[i]-v2[l];
          v=my[v2[i]];
          if(v>=u)
            ans=max(ans,u);
          else
          {
              while(l<i)
              {
                  l++;
                  u=v2[i]-v2[l];
                  if(v>=u) break;
              }
          }
      }
       cout<<ans<<endl;









}




