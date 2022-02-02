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
                 else if(prev->data<curr->data) prev->right=NULL;
                 else prev->left=NULL;
                 delete curr;
             }
             else if(curr->right==NULL)
             {
                 node* temp=curr;
                 if(prev==nullptr)  root=root->left;
                 else if(prev->data<curr->data) prev->right=curr->left;
                 else prev->left=curr->left;
                 delete temp;
             }
             else if(curr->left==NULL)
             {
                 node* temp=curr;
                 if(prev==nullptr) root=root->right;
                 else if(prev->data<curr->data) prev->right=curr->right;
                 else  prev->left=curr->right;
             }
             else
             {
                  node* temp=curr;
                  node* pre=curr;
                  curr=curr->right;
                  while(curr->left)
                  {pre=curr;curr=curr->left;}
                  swap(temp->data,curr->data);
                  if(pre==temp)
                    temp->right=curr->right;
                  else if(curr->right==NULL)
                    pre->left=NULL;
                  else
                    pre->left=curr->right;
                  delete curr;

             }


      }
      else if(curr->data<x)
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

