#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj[250];
ll visit[250]={0};
set<ll>ans;
void dfs(ll s)
{
      visit[s]=1;
       ans.insert(s);
       ll i,sz=adj[s].size();
       for(i=0;i<sz;i++)
       {
           ll v=adj[s][i];
           if(visit[v]==0) dfs(v);
       }
}
int main()
{
    ll n,u,v,i,tc,m;
     cin>>tc;
     while(tc--)
     {
         ans.clear();
          memset(adj,0,sizeof(adj));
          memset(visit,0,sizeof(visit));
          cin>>n>>m;
          while(m--)
          {
              cin>>u>>v;
              adj[u].push_back(v);
          }
          dfs(1);
          for(auto itr=ans.begin();itr!=ans.end();itr++)
            cout<<*itr<<" ";
          cout<<endl;
     }
}
