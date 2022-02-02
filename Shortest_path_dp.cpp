#include<bits/stdc++.h>
#define inf LONG_MAX
using namespace std;
typedef long long ll;
ll n,weight[255][255],memo[255],m;
ll ways(ll u)
{
    if(memo[u]!=-1) return memo[u];
    ll ans=inf,flag=0,i,j;
    for(i=1;i<=n;i++)
    {  if(u!=i)
    {
        if(weight[u][i]!=inf)
            {
             ans=min(ans,weight[u][i]+ways(i));flag=1;

            }
    }

    }
    if(flag==0) return memo[u]=0;
    return memo[u]=ans;
}
int main()
{  ll i,j;
     for(i=0;i<=250;i++)
     {  memo[i]=-1;
         for(j=0;j<=250;j++)
            weight[i][j]=inf;
     }
     cin>>n>>m;
     while(m--)
     {  ll u,v,w;
         cin>>u>>v>>w;
         weight[u][v]=w;
     }
     ll p=ways(1);
    cout<<p<<endl;

}
