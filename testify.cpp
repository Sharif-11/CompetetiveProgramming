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
ll size(node * curr)
{   ll sz=0;
    while(curr)
    {
        sz++;
        curr=curr->next;
    }
    return sz;
}
node* reverse(node* curr)
{
    ll sz=size(curr);
    ll k,cnt=0;
    if(sz%2==0)  k=sz/2;
    else k=sz/2+1;
    node* fst=curr;
    node* head=curr;
    node* prev=nullptr;
    node* tail;
    while(curr)
    {  tail=curr;
       cnt++;
       if(cnt<=k)
       {
           prev=curr;
           curr=curr->next;
       }
       else
       {   node* temp=curr->next;
           curr->next=prev;
           prev=curr;
           curr=temp;
       }
    }
    return tail;
}
bool pallindrome(node* c1,node* c2,ll sz)
{
      ll k=0;
      while(c1&&c2&&k<sz/2)
      {
          k++;
          if(c1->data!=c2->data) return 0;
          c1=c1->next;
          c2=c2->next;


      }
      return 1;
}

int main()
{
    node * head=construct();
    ll sz=size(head);
    node* tail=reverse(head);

    if(pallindrome(head,tail,sz))
    cout<<"The linked list is pallindrome"<<endl;
    else cout<<"The linked list is not pallindrome"<<endl;



}


