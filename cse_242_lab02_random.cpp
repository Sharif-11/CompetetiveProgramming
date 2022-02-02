//traversing a circular linked list from a random node
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
    node* head=nullptr;
    node* prev=nullptr;
    node* tail=nullptr;
    ll u;
    while(1)
    {
        cin>>u;
        if(u==-1) break;
        node* n1=new node;
        n1->data=u;
        if(head==nullptr)
        {
            head=tail=n1;
            tail->next=head;
            prev=n1;
        }
        else
        {
            prev->next=n1;
            n1->next=head;
            tail=n1;
            prev=n1;
        }


    }
    return head;
}
void show(node* curr)
{   node* prev=curr;
    ll flag=0;
    while(curr)
    {   flag+=(prev==curr);
         if(flag>1) break;
        cout<<curr->data<<" ";

        curr=curr->next;

    }
    cout<<endl;
}
int main()
{   ll pos,u;
   node* head=construct();
   cout<<"The position of the starting node is: ";
   cin>>pos;
   u=pos;
   node* curr=head;
   while(--pos)
     curr=curr->next;
     cout<<"Traversing from node "<<u<<" the list elements are: ";
   show(curr);
}
