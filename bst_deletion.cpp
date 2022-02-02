#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll data;
    node* left;
    node* right;
};
node* root;
void construct()
{   ll u;
    root=nullptr;
    while(1)
    {
        cin>>u;
        if(u==-1) break;
        node* n1=new node;
        n1->data=u;n1->left=n1->right=NULL;
        if(root==nullptr)
         root=n1;
        else
        {   node* curr=root;
            while(1)
            {
                 if(curr->data>=u)
                 {
                     if(curr->left==NULL)
                     {
                         curr->left=n1;break;
                     }
                     else
                     curr=curr->left;
                 }
                 else
                 {
                     if(curr->right==NULL)
                        {curr->right=n1;break;}
                     else curr=curr->right;
                 }

            }
        }



    }

}
void inorder(node* curr)
{
        if(!curr) return;
        if(curr->left) inorder(curr->left);
        cout<<curr->data<<" ";
        if(curr->right) inorder(curr->right);

}
void erase(node* curr,ll x,node* prev=nullptr)
{
    if(!curr) return;
    if(curr->data==x)
    {
         if(curr->left==NULL&&curr->right==NULL)
         {
             if(prev==nullptr) root=nullptr;
             else if(prev->data<x)
             {prev->right=NULL;
               delete curr;
             }
             else
             {
                 prev->left=NULL;
                 delete curr;
             }

         }
         else if(curr->right==NULL)
         {   node* temp=curr;

             if(prev==nullptr)
               root=root->left;
             else if(curr->data>prev->data)
                    prev->right=curr->left;
               else  prev->left=curr->left;
              delete temp;
         }
         else if(curr->left==NULL)
         {
             node* temp=curr;
             if(prev==nullptr)
             root=root->right;
             else if(curr->data>prev->data) prev->right=curr->right;
             else prev->left=curr->right;
             delete temp;
         }
         else
         {
              if(curr->right->left==NULL)
              {
                    ll t=curr->data;
                    curr->data=curr->right->data;
                    curr->right->data=t;
                    node* temp=curr->right;
                  curr->right=curr->right->right;
                  delete temp;

              }
              else
              {
                  node* temp=curr;
                  node* pre=curr;
                  curr=curr->right;
                  while(1)
                  {
                      if(curr->left==NULL) break;
                      pre=curr;
                      curr=curr->left;

                  }
                  ll t=temp->data;
                  temp->data=curr->data;
                  curr->data=t;
                  if(curr->right)
                    pre->left=curr->right;
                  else pre->left=NULL;
                  delete curr;

              }
         }

    }
    else if(x>curr->data)
        erase(curr->right,x,curr);
    else erase(curr->left,x,curr);
}


int main()
{     ll u;
       construct();
       inorder(root);
       cout<<endl;
       while(root)
       {
       cin>>u;
       erase(root,u);
       inorder(root);cout<<endl;
       }
}
