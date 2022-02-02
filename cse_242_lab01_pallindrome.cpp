//check whether a linked list is pallindrome or not
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
node* reverse(node* curr)
{
    node *fst=curr;
    node* prev=nullptr;
    while(curr)
    {      fst=curr;
          node* temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;

    }
    return fst;

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
bool pallindrome(node* c1,node* c2)
{
     while(c1)
     {
          if(c1->data!=c2->data) return 0;
           c1=c1->next;
           c2=c2->next;
     }
     return 1;

}

int main()
{
    node * head=construct();
    node* tail=reverse(head);
    if(pallindrome(head,tail))
        cout<<"The linked list is pallindrome"<<endl;
    else cout<<"The linked list is not pallindrome"<<endl;



}

