//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll a,i,b,j,k,t,x,y,z,tc,u,v,w
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
ll n,m;
struct num
{
    ll u,v,cost;
};
bool operator<(num x,num y)
{
    return x.cost>y.cost;
}
vector<num>adj[250];
ll visit[250]={0};
ll prims()
{  ll ans=0;
    priority_queue<num>PQ;
    visit[1]=1;
    ll i,j;
    for(i=0;i<adj[1].size();i++)
    {
          PQ.push(adj[1][i]);
    }
    while(!PQ.empty())
    {
        num n1=PQ.top();
        ll u=n1.u,v=n1.v,w=n1.cost;
        if(visit[u]==1&&visit[v]==1)
            PQ.pop();

        else if(visit[v]==0)
        {   ans+=w;
           PQ.pop();
            ll sz=adj[v].size();
            f(i,sz)
            {   if(visit[adj[v][i].v]==0)
                PQ.push(adj[v][i]);
            }
            cout<<endl;
            cout<<u<<" "<<v<<endl;
            visit[v]=1;

        }



    }
    return ans;
}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
     cin>>n>>m;
     f(i,m)
     {
         cin>>u>>v>>w;
         adj[u].pb({u,v,w});
         adj[v].pb({v,u,w});
     }
     cout<<prims()<<endl;







}





