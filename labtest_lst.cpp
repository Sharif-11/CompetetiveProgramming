#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll data;
    node* next;

};
node* n1[250];
void insert(ll n)
{
      vector<ll>dt;
      vector<ll>idx;
      ll u;
      for(int i=0;i<n;i++)
      {
           cin>>u;
           dt.push_back(u);
      }
      for(int i=0;i<n;i++)
      {
          cin>>u;
          idx.push_back(u);
      }
      for(int i=0;i<n;i++)
      {
          n1[i]=new node;
          n1[i]->data=dt[i];

      }
      for(int i=0;i<n;i++)
      {
          if(idx[i]==-1)
            n1[i]->next=NULL;
          else n1[i]->next=n1[idx[i]];
      }
}
ll show(node* curr,ll n)
{
       ll sz=0;
       while(curr)
       {
           sz++;
           curr=curr->next;
       }
       return (sz==n);

}
int main()
{      ll n;
      cin>>n;
        insert(n);
    for(int i=0;i<n;i++)
    {
        if(show(n1[i],n))
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
