//implementation of stack via linked list
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Stack
{
    struct node
    {
        ll data;
        node* next;
    };
    node* head=nullptr;
    ll sz=0;
    ll top(){return head->data;}
    void push(ll x);
    void pop();
    bool empty(){return (sz==0);}
};
void Stack::push(ll x)
{
    node* n1=new node;
    n1->data=x;
    if(head==nullptr)
    {
        head=n1;
        head->next=NULL;
    }
    else
    {
        n1->next=head;
        head=n1;
    }
    sz++;
}
void Stack::pop()
{
    if(head==nullptr) return;
    node* temp=head->next;
    delete head;
    head=temp;
    sz--;
}
int main()
{    ll u;
     Stack stk;
     //insert data into stack
       while(1)
       {
           cin>>u;
           if(u==-1) break;
           stk.push(u);
       }
       //display data of stack
       while(!stk.empty())
       {
           cout<<stk.top()<<" ";
           stk.pop();
       }
       cout<<endl;

}
