#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj[200005];
ll visit[200005],p[200005],flag=0;
void bfs(ll s)
{   memset(p,-1,sizeof(p));
    queue<ll>Q;
    Q.push(s);
    visit[s]=1;
    while(!Q.empty())
    {
        ll u=Q.front();Q.pop();
        ll i,sz=adj[u].size();
        for(i=0;i<sz;i++)
        {
            ll v=adj[u][i];
            if(visit[v]==0)
            {
                 p[v]=u;
                 visit[v]=1;
                 Q.push(v);
            }
            else  if(v!=p[u])
            {   flag=1;
                cout<<"There is a cycle in the graph."<<endl;return;
            }



        }
    }

}
int main()
{    ll n,m,i;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
          if(visit[i]==0&&flag==0)
            bfs(i);
    }
    if(flag==0)
         cout<<"There is no cycle in the graph."<<endl;
}
