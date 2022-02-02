//construction,insertion & deletion in a linked list;
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll data;
    node* next;
    node* pre;
};
node* construct()
{
    ll u;
    node* head=nullptr;
    node* prev=nullptr;
    while(1)
    {
        cin>>u;
        if(u==-1) break;
        node* curr=new node;
        curr->data=u;
        curr->next=NULL;
        curr->pre=prev;

        if(prev==nullptr)
            {head=curr;prev=curr;}
        else
        {
             prev->next=curr;
             curr->pre=prev;
             prev=curr;
        }


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
node* insert(node* curr,ll k,ll x)
{   ll t=1;
     node* prev=nullptr;
     node* head=curr;
    while(curr)
    {
          if(t==k)
          {prev=curr;break;}
          t++;
          curr=curr->next;
    }
    node* n1=new node;
    n1->data=x;
    if(prev==nullptr)
    {
        n1->next=head;
        head->pre=n1;
        head=n1;
    }
    else
    {
        n1->next=prev->next;
        n1->pre=prev;
        prev->next=n1;
    }
    return head;

}
node* remove(node* curr,ll k)
{
    node* head=curr;
    node* prev=nullptr;
    ll t=0;
    while(curr)
    {
        t++;
        if(t<k)
        prev=curr;
        else if(t==k&&t!=1)
        {
            prev->next=curr->next;
            if(curr->next)
            curr->next->pre=prev;
            delete curr;
            return head;

        }
        curr=curr->next;


    }

    if(prev==nullptr)
    {
         node* temp=head->next;
         delete head;
         head=temp;
         head->pre=NULL;

    }

     return head;
}
int main()
{    ll u,k;
      node* head=construct();
      cout<<"Initial List: ";
      show(head);//cout<<endl;
      cout<<"Node to be inserted: ";
      cin>>u;
      cout<<"Position of the inserted node: ";
      cin>>k;
      head=insert(head,k,u);
      cout<<"List after insertion: ";
      show(head);
      cout<<"Position of the node to be deleted: ";
      cin>>k;
      head=remove(head,k);
      cout<<"List after deletion: ";show(head);
}
