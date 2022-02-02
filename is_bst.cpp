#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll data,l,r;
};
node vct[150];ll n;
ll isbst(ll curr)
{      if(curr>n) return 0;
    if(vct[curr].l==0&&vct[curr].r==0) return 1;
    else if(vct[curr].l==0&&vct[curr].r>0)
     return (vct[curr].data<vct[vct[curr].r].data&&isbst(vct[curr].r));
    else if(vct[curr].l>0&&vct[curr].r==0)
        return (vct[curr].data>vct[vct[curr].l].data&&isbst(vct[curr].l));
    else return (vct[vct[curr].l].data<vct[curr].data&&vct[vct[curr].r].data>vct[curr].data&&isbst(vct[curr].l)&&isbst(vct[curr].r));


}
set<ll>st;
void dfs(ll curr)
{
    if(curr>n) return;
     st.insert(curr);
     if(vct[curr].l>0) dfs(vct[curr].l);
     if(vct[curr].r>0) dfs(vct[curr].r);
}
int main()
{
     ll u,v,i,w;
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>u>>v>>w;
         vct[i+1].l=u;
         vct[i+1].r=v;
         vct[i+1].data=w;

     }
     if(isbst(1))
     {
         dfs(1);
         if(st.size()==n)
            cout<<"Yes"<<endl;
         else cout<<"No"<<endl;
     }
     else cout<<"No"<<endl;
}
