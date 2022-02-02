//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,a,i,b,j,t,x,y,z,tc,u,v,w
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
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
ll n,k,xorr[200005]={0};
vector<ll>adj[200005];
ll visit[200005]={0},arr[200005];
void dfs(ll s)
{
    visit[s]=1;
    ll i,sz=adj[s].size();
    ll xx=arr[s];
    f(i,sz)
    {
        ll v=adj[s][i];
        if(visit[v]==0)
        {
            dfs(v);
            xx=xx^xorr[v];

        }
    }
    xorr[s]=xx;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n>>k;k--;
          for(i=0;i<=n+1;i++) {adj[i].clear();visit[i]=0;xorr[i]=0;}
          ll sum=0;
          f(i,n)
          {
              cin>>arr[i+1];
              sum=sum^arr[i+1];

          }
          f(i,n-1)
          {
              cin>>u>>v;
              adj[u].pb(v);
              adj[v].pb(u);

          }
          dfs(1);
          if(sum==0) yes;
          else if(k==1) tr(sum==0);
          else
          {   ll flag=0;
               for(i=1;i<=n;i++)
                {
                    if(xorr[i]==0&&(sum^xorr[i]^arr[i])==0)
                        flag=1;
                }
               tr(flag);
          }

      }








}





