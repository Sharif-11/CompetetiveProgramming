#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj[2005];

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
          cout<<i<<"->";
          for(ll j=0;j<adj[i].size();j++)
          {
              if(j==adj[i].size()-1) cout<<adj[i][j]<<endl;
              else cout<<adj[i][j]<<"->";
          }
     }


}

