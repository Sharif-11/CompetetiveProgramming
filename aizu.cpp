#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct  heap
{
    vector<ll>vct;
    ll sz=0;
    void push(ll x);
    void pop();
    ll top();
    bool empty(){return (sz==0);}

};
//insertion in heap
void heap::push(ll x)
{
    vct.push_back(x);
    sz++;
    ll idx=sz-1;
    while(idx)
    {
        ll u=(idx+1)/2-1;
        if(u<0) break;
        if(vct[u]<vct[idx])
            swap(vct[u],vct[idx]);
        idx=u;
    }
}
//finding the top element in heap
ll heap::top()
{
    return vct[0];
}
//deletion in heap
void heap::pop()
{
    if(sz==1) {vct.clear();sz=0;return;}
    else
     {
         swap(vct[0],vct[sz-1]);
         vct.pop_back();
     }
    sz--;
    ll idx=0;ll mx=idx;
    while(idx<sz)
    {    mx=idx;
        if(2*idx+1<sz)
        {
            if(vct[2*idx+1]>vct[mx])
                mx=2*idx+1;
        }
         if(2*idx+2<sz)
        {
            if(vct[2*idx+2]>vct[mx])
                mx=2*idx+2;
        }
        if(mx==idx) break;
        else
        {
            swap(vct[idx],vct[mx]);
            idx=mx;
        }
    }

}
int main()
{
    ll u,i,n;
    heap h1;
    //inserting element in heap
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>u;
        h1.push(u);
    }

    //display element of heap in non increasing order
     for(i=0;i<h1.sz;i++)
        cout<<h1.vct[i]<<" ";
     cout<<endl;

}

