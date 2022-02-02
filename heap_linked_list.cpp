#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string binary(ll n)
{       if(n==0) return "0";
      string tt="";
      while(n)
      {
          ll u=n%2;
          if(u==0) tt="0"+tt;
          else tt="1"+tt;
          n/=2;
      }
      return tt;
}
struct heap
{
    struct node
    {
        ll data;
        node* left=NULL;
        node *right=NULL;
        node* parent=NULL;
    };
    node* head=nullptr;
    node* tail=nullptr;
    ll sz=0;
    void push(ll x);
    void pop();
    ll top(){return head->data;}
    bool empty(){return (sz==0);}
    void show(node* curr);

};
void heap::push(ll x)
{
     node* n1=new node;
     n1->data=x;
     if(head==nullptr)
     {
         head=tail=n1;
         sz++;
         return;
     }
     else
     {
          sz++;
          string tt=binary(sz);
          node* temp=head;
         ll n=tt.size()-1;
          for(ll i=1;i<n;i++)
          {
              if(tt[i]=='0') temp=temp->left;
              else temp=temp->right;
          }
          if(tt[n]=='0')
            temp->left=n1;
          else temp->right=n1;
           n1->parent=temp;
          tail=n1;
     }
     node* curr=tail;
     node* temp=tail;
     while(curr->parent)
     {
         if(curr->parent->data<curr->data)
         {
             ll t=curr->parent->data;
             curr->parent->data=curr->data;
             curr->data=t;
             curr=curr->parent;
         }
         else break;
     }




}
void heap::pop()
{    ll i;
      if(sz==0) return ;
      if(sz==1)
      {
          delete head;
          head=tail=nullptr;
          sz=0;
          return;
      }
    string tt=binary(sz);
   ll n=tt.size();
   node* temp=head;
   for(i=1;i<n;i++)
   {
       if(tt[i]=='0') temp=temp->left;
       else temp=temp->right;
   }
    swap(temp->data,head->data);
      if(tt[n-1]=='0')
        temp->parent->left=NULL;
      else temp->parent->right=NULL;
      delete temp;
     node* curr=head;
     while(1)
     {   node* temp=curr;
         if(curr->left)
         {
             if(curr->left->data>temp->data)
                temp=curr->left;
         }
         if(curr->right)
         {
                if(curr->right->data>temp->data)
                temp=curr->right;
         }
         if(temp==curr) break;
         else
            swap(curr->data,temp->data);
          curr=temp;
     }
    sz--;
}
void heap::show(node* curr)
{
     if(!curr) return;
     cout<<curr->data<<" ";
     if(curr->left) show(curr->left);
     if(curr->right) show(curr->right);

}
int main()
{     ll i,n,u;
      heap h1;
       while(cin>>u&&u>=0)
       h1.push(u);
       while(!h1.empty())
       {
           cout<<h1.top()<<endl;
           h1.pop();
       }


}

