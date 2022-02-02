//Implementation Of Queue by using circular linked list
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Queue
{
    struct node
    {
        ll data;
        node* next;
    };
    ll sz=0;
    node* tail=nullptr;
    void push(ll x);
    void pop();
    bool empty(){return (sz==0);}
    ll front(){return tail->next->data;}

};
void Queue::push(ll x)
{
    node* n1=new node;
    n1->data=x;
    if(tail==nullptr)
    {
        tail=n1;
        tail->next=tail;
    }
    else
    {
        n1->next=tail->next;
        tail->next=n1;
        tail=n1;

    }
    sz++;

}
void Queue::pop()
{   if(tail->next==tail)
  {
       delete tail;
       tail=nullptr;
       sz--;
       return;
  }
    node* temp=tail->next;
    tail->next=temp->next;
    delete temp;
    sz--;

}
int main()
{
       ll u;
       Queue q1;
       //inserting data into queue
       while(1)
       {
           cin>>u;
           if(u==-1) break;
           q1.push(u);
       }
       //display data of queue
       while(!q1.empty())
       {
           cout<<q1.front()<<" ";
           q1.pop();
       }
       cout<<endl;
}
