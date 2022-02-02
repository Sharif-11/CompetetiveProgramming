#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj[55];
ll visit[55]={0};
ll flag=0;
void dfs(ll s)
{    visit[s]=1;
      ll i,sz=adj[s].size();
      for(i=0;i<sz;i++)
      {
          ll v=adj[s][i];
          if(visit[v]==0) dfs(v);
          else if(visit[v]==1)
            flag=1;
      }
      visit[s]=2;
}
int main()
{
      ll u,v,i,n,m;
      //Node:n
      //Edge:m
      cin>>n>>m;
      for(i=0;i<m;i++)
      {
          cin>>u>>v;
          adj[u].push_back(v);
      }
      for(i=1;i<=n;i++)
      {
          if(!visit[i]) dfs(i);
      }
      if(flag==1) cout<<"Cycle Exists"<<endl;
      else cout<<"No Cycle"<<endl;

}
