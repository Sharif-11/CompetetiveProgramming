#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
struct node
{
    ll l,r,w;
};
node vct[250];
ll isbst(ll curr)
{
     if(vct[curr].l==0&&vct[curr].r==0) return 1;
     else if(vct[curr].l>0&&vct[curr].r==0)
     {
         ll v=vct[curr].l;
         if(vct[v].w>=vct[curr].w) return 0;
         return isbst(v);
     }
     else if(vct[curr].l==0&&vct[curr].r>0)
     {
         ll v=vct[curr].r;
         if(vct[v].w<=vct[curr].w)  return 0;
         return isbst(v);
     }
     else
     {
         ll v=vct[curr].l;
         if(vct[v].w>=vct[curr].w) return 0;

          v=vct[curr].r;
         if(vct[v].w<=vct[curr].w)  return 0;
         return ((isbst(v))&&isbst(vct[curr].l));

     }
}
set<ll>st;
ll visit[250]={0},flag=0;
void dfs(ll curr)
{     if(visit[curr]==1)
{
    flag=1;return;
}
     visit[curr]=1;
    st.insert(curr);
    if(vct[curr].l) dfs(vct[curr].l);
    if(vct[curr].r) dfs(vct[curr].r);
}
int main()
{
    ll l,r,w,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>l>>r>>w;
        vct[i].l=l;
        vct[i].r=r;
        vct[i].w=w;
    }
    dfs(1);
    if(flag==1) cout<<"No"<<endl;
    else if(isbst(1)&&st.size()==n)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
