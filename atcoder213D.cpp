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
ll visit1[200006]={0};
vi adj[200005];
ll parent[200005];

void dfs(ll s,ll p=-1)
{
    visit1[s]=1;parent[s]=p;

    cout<<s<<" ";
    ll flag=0;
    ll i,sz=adj[s].size();
    f(i,sz)
    {
        ll v=adj[s][i];
        if(visit1[v]==0)
            {flag=1;dfs(v,s);}
    }
     if(p>0)
    cout<<p<<" ";



}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      parent[1]=-1;
      cin>>n;
      f(i,n-1)
      {
          cin>>u>>v;
          adj[u].pb(v);
          adj[v].pb(u);
      }
      for(i=1;i<=n;i++) sortt(adj[i]);
      dfs(1);
      cout<<endl;








}



