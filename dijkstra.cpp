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
struct node
{
    int att,cost;
}n1;
bool operator<(node a,node b)
{
    return a.cost>b.cost;
}
struct edge {ll v,w;}
e1;
vector<edge>adj[100];
priority_queue<node>pq;
ll dist[105];
ll n;
ll dijkstra(ll s,ll d)
{   ll i;
    for(i=1;i<=n;i++) dist[i]=inf;
    dist[s]=0;
    n1.att=s;n1.cost=0;
    pq.push(n1);
    while(!pq.empty())
    {
        node u=pq.top();pq.pop();
        if(u.cost!=dist[u.att]) continue;
        for(edge e:adj[u.att])
        {
            if(dist[e.v]>u.cost+e.w)
            {
                dist[e.v]=u.cost+e.w;
                n1.att=e.v;n1.cost=dist[e.v];
                pq.push(n1);
            }
        }
    }
    return dist[d];
}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n>>m;
      f(i,m)
      {
          cin>>u>>v>>x;
          e1.v=v;e1.w=x;
          adj[u].pb(e1);
          e1.v=u;
          adj[v].pb(e1);
      }
      cin>>x>>y;
      cout<<dijkstra(x,y)<<endl;








}




