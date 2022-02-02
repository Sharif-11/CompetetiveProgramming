#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
stack<ll>stk;
queue<ll>Q;
int main()
{
    ll n,i,u,v;
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>u;
         if(u==1)
         {
             cin>>v;
             stk.push(v);
         }
         else
         {
             while(!stk.empty())
             {
                 v=stk.top();
                 stk.pop();
                 Q.push(v);
             }
         }
     }
     cout<<stk.size()<<" "<<Q.size()<<endl;
}

