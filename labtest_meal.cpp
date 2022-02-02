#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct num
{
    ll id,idx,cnt;
};
bool operator<(num x,num y)
{
    if(x.cnt>y.cnt) return 0;
    if(x.cnt==y.cnt) return x.idx<y.idx;
    return 1;
}
int main()
{
    ll n,i,u,v,k;
    vector<num>vct;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>u>>v;
        vct.push_back({u,i,v});
    }
    cin>>k;
    sort(vct.begin(),vct.end());
    ll cnt=0,idx=-1;
    for(i=0;i<n;i++)
    {
         if(i==0)  cnt++;
         else
         {
             if(vct[i].cnt!=vct[i-1].cnt) cnt++;
         }
         if(cnt==k)
         {
             idx=i;
             break;
         }
    }
    if(idx==-1) cout<<"Not found"<<endl;
    else cout<<"The student with id number "<<vct[idx].id<<" will be rewarded"<<endl;

}
