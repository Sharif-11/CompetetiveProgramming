//Insert an element in a sorted liked list
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
   ll data;
   node* next;
};
node* construct()
{
    node* head=NULL;
    node* prev=new node;
    while(1)
    {   ll u;
          cin>>u;
       if(u==-1) break;
      node* curr=new node;
      curr->data=u;
      curr->next=NULL;
      if(head==NULL)
      {
          head=curr;
          prev=curr;

      }
      else
      {
         prev->next=curr;
          prev=curr;
      }
    }
    return head;
}
node* insert(node* curr,ll x)
{   node* head=curr;
    node* prev=nullptr;
    while(curr)
    {
        if(curr->data<=x)
            prev=curr;
        else break;
        curr=curr->next;
    }

    node* n1=new node;
     n1->data=x;
    if(prev==nullptr)
    {
          n1->next=head;
          head=n1;
    }
    else
    {
        n1->next=prev->next;
        prev->next=n1;
    }
    return head;
}
void show(node* curr)
{
    while(curr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main()
{   ll u;
    node * head=construct();
     cout<<"Element To be inserted: ";cin>>u;
    cout<<"\nAfter Insertion:\n";
    head=insert(head,u);
     show(head);
}
