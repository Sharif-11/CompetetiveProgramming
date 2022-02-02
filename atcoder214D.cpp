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
ll visit[10005]={0},weight[10005],sum[10006]={0},parent[1005];
vi adj[10005];
unordered_map<ll,ll>vct[1005];
void dfs(ll s,ll p=-1,ll mx=0)
{
    visit[s]=1;
    parent[s]=p;
    weight[s]=mx;
    ll i,sz=adj[s].size();
    f(i,sz)
    {
        ll v=adj[s][i];
        if(visit[v]==0)
        {
            dfs(v,s,max(mx,vct[s][v]));
            sum[s]+=weight[v]+sum[v];
        }
    }
}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n;
      f(i,n-1)
      {
          cin>>u>>v>>w;
          adj[u].pb(v);adj[v].pb(u);
          vct[u][v]=vct[v][u]=w;
      }
      dfs(1);
      cout<<"__________________________"<<endl;
      for(i=1;i<=n;i++)
        cout<<weight[i]<<" "<<sum[i]<<" "<<parent[i]<<endl;








}




