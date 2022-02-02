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
ll cnt[200005]={0},visit1[200005]={0},n,dist[200005]={0};
vi adj[200005];
void bfs(ll s)
{
    queue<ll>Q;
    visit1[s]=cnt[s]=1;
    Q.push(s);
    while(!Q.empty())
    {
        ll u=Q.front();Q.pop();
        ll sz=adj[u].size(),i;
        f(i,sz)
        {
            ll v=adj[u][i];
            if(visit1[v]==0)
            {
                visit1[v]=1;
                dist[v]=dist[u]+1;
                cnt[v]=cnt[u];
                Q.push(v);
            }
            else if(dist[v]==dist[u]+1)
            {cnt[v]+=cnt[u];cnt[v]%=mod;}
        }

    }
    cout<<cnt[n]<<endl;

}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n>>m;
      f(i,m)
      {
          cin>>u>>v;
          adj[u].pb(v);adj[v].pb(u);
      }
      bfs(1);








}



