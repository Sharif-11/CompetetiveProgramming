#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
   ll data;
   node* next;
};
node* insert()
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


bool isSorted(node* curr)
{   node* prev=nullptr;
    while(curr)
    {
         if(prev==nullptr)
         {
             prev=curr;
             continue;
         }
         else
         {
             if(prev->data>curr->data) return 0;

         }
         prev=curr;
         curr=curr->next;
    }
    return 1;
}
int main()
{
    node * head=insert();

    cout<<isSorted(head)<<endl;

}
