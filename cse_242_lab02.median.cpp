//finding the median of a doubly linked list
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct dlist {
 struct node
 {
    ll data;
    node* next;
    node* pre;
 };
  node* head=nullptr;
  node* insert(ll x)
  {
              node* prev=nullptr;
        node* curr=head;
        node* n1=new node;n1->data=x;
        if(head==nullptr)
        {
              n1->next=NULL;
              n1->pre=NULL;
              head=n1;
        }
        else
        {
            while(curr)
            {
                if(curr->data<=x)
                    prev=curr;
                else break;
                curr=curr->next;
            }
            if(prev==nullptr)
            {
                  n1->next=head;
                  head->pre=n1;
                  n1->pre=NULL;
                  head=n1;
            }
            else
            {
                n1->next=prev->next;
                n1->pre=prev;
                prev->next=n1;

            }
        }
        return head;
  }
  ll median();
  void show();

};


ll dlist::median()
{     node* curr=head;

    if(curr->next==NULL) return curr->data;
    node* c1=curr;
    node* c2=curr->next->next;
    while(c1&&c2)
    {
        c1=c1->next;
        if(c2->next)
        c2=c2->next->next;
        else break;
    }
    return c1->data;
}
void dlist::show()
{
    node* curr=head;
    while(curr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int main()
{
        ll u;
        dlist d1;
        while(1)
        {
            cin>>u;
            if(u==-1) break;
            d1.head=d1.insert(u);

        }
        //d1.show();
        cout<<"The median of the list is: ";
        cout<<d1.median()<<endl;
}
