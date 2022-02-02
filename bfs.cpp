#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj[2005];
ll visit[200005]={0};
void bfs(ll s)
{
    queue<ll>Q;
    Q.push(s);
    visit[s]=1;
    while(!Q.empty())
    {
        ll u=Q.front();Q.pop();
        cout<<u<<" ";
        ll i,sz=adj[u].size();
        for(i=0;i<sz;i++)
        {
              ll v=adj[u][i];
              if(!visit[v])
              {
                  visit[v]=1;
                  Q.push(v);
              }
        }
    }
    cout<<endl;

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
    ll cnt=0;
     for(i=1;i<=n;i++)
     {
         if(visit[i]==0)
         {  cout<<"Component "<<++cnt<<": ";
             bfs(i);cout<<endl;}
     }

}
