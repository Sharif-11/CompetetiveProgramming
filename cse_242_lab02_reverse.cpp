//reversing a doubly linked list
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
node* reverse(node* curr)
{
    node* head=curr;
    node* prev=nullptr;
    node* tail;
    while(curr)
    {
        tail=curr;
        node* temp=curr->next;
        curr->next=prev;
        curr->pre=temp;
        prev=curr;
        curr=temp;
    }
    return tail;
}

int main()
{
    node* head=construct();
    cout<<"Initial list: ";
    show(head);
    node* tail=reverse(head);
    cout<<"List after reversion: ";
    show(tail);

}
