#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct num
{
    double n; ll idx;
};
bool comp1(num x,num y)
{
    if(x.n>y.n) return 1;
    if(x.n==y.n) return x.idx<y.idx;
    return 0;
}
bool comp2(num x,num y)
{
    if(x.n<y.n) return 1;
    if(x.n==y.n) return x.idx>y.idx;
    return 0;
}
bool comp3(num x,num y)
{
    if(x.n<y.n) return 1;
    if(x.n==y.n) return x.idx<y.idx;
    return 0;
}
int main()
{
    ll i,s,n,u;
    vector<num>vct;
    cin>>s>>n;
    stack<ll>stk;
    for(i=0;i<n;i++)
    {
        double u;
        cin>>u;
        vct.push_back({u,i+1});

    }
   if(s==1)
   {
       sort(vct.begin(),vct.end(),comp1);
       for(i=9;i>=0;i--)
        cout<<vct[i].idx<<endl;
   }
   else if(s==3)
   {
       sort(vct.begin(),vct.end(),comp2);
       for(i=9;i>=0;i--)
        cout<<vct[i].idx<<endl;
   }
   else
   {
       sort(vct.begin(),vct.end(),comp3);
       ll u=(n-10)/2;
       for(i=u+10;i>=u+1;i--)
       cout<<vct[i].idx<<endl;

   }

}
