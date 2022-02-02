#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj[200005];
ll n,vis[200005]={0},flag=0,pp[200005],m;
void dfs(ll u,ll par=-1)
{
    vis[u]=1;
    pp[u]=par;
    ll i,sz=adj[u].size();
    for(i=0;i<sz;i++)
    {
        ll v=adj[u][i];
        if(vis[v]==0)
            dfs(v,u);
        else if(v!=pp[u])
            flag=1;
    }
}
int main()
{    set<ll>st[200005];
      cin>>n>>m;
      ll i;
      while(m--)
      {   ll u,v;
          cin>>u>>v;
          adj[u].push_back(v);
          adj[v].push_back(u);
          st[u].insert(v);
          st[v].insert(u);
      }
      for(i=1;i<=n;i++) {flag+=(st[i].size()>2);
      if(vis[i]==0) dfs(i);
      }

      if(flag) cout<<"No"<<endl;
      else cout<<"Yes"<<endl;


}
