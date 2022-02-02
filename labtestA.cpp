#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll data;
    node* next;
};
node*  insert(ll n)
{
      node* head=nullptr;
      node* prev=nullptr;
      ll u;
      for(int i=0;i<n;i++)
      {
          cin>>u;
          node* n1=new node;
          n1->next=NULL;
          n1->data=u;
          if(prev==nullptr)
          {
              head=n1;
              prev=n1;
          }
          else
          {
              prev->next=n1;
              prev=n1;
          }
      }
      return head;

}
ll func(node* curr)
{
     ll ans=0;
     while(curr)
     {
         ans+=curr->data;
         curr=curr->next;
     }
     return ans;
}
int main()
{   ll n;
    cin>>n;
    node* head=insert(n);
    cout<<func(head)<<endl;
}
