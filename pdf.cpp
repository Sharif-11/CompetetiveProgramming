//implementation of stack using linked list
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Queue{

struct node
{
   ll data;
   node* next;
};
  node* head=nullptr;node* tail=nullptr;
  ll sz=0;
   ll front(){return head->data;}
   bool empty(){return (sz==0);}
  void push(ll x);
  void pop();
};
void Queue::push(ll x)
{
    node* n1=new node;
    n1->data=x;
    n1->next=NULL;
    if(tail==nullptr)
    head=tail=n1;
    else
    {
        tail->next=n1;
        tail=n1;
    }
    sz++;
}
void Queue::pop()
{   if(head==nullptr) return;
    node* temp=head->next;
     delete head;
     head=temp;
     sz--;
}
int main()
{
        Queue q1;
        ll u;
        //insert data into queue
         while(1)
         {
             cin>>u;
             if(u==-1) break;
             q1.push(u);

         }
         // showing data of queue
         while(!q1.empty())
         {
             u=q1.front();
             cout<<u<<" ";
             q1.pop();
         }
         cout<<endl;



}
