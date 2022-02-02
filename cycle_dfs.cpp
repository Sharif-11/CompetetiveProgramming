#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj[200005];
ll visit[200005],p[200005],flag=0;
void dfs(ll s)
{
    visit[s]=1;
    ll i,sz=adj[s].size();
    for(i=0;i<sz;i++)
    {
        ll v=adj[s][i];
        if(visit[v]==0)
        {
            visit[v]=1;
            p[v]=s;
            dfs(v);
        }
        else if(v!=p[s])
            flag=1;
    }
}
int main()
{
    ll u,v,n,m,i;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=1;i<=n;i++)
    {
        if(visit[i]==0) dfs(i);
    }
    if(flag==0)
        cout<<"There is no cycle in the graph."<<endl;
    else cout<<"There is a cycle in the graph."<<endl;
}
