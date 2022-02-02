#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll data;
    node* left;
    node* right;
} *root;
node* construct()
{   ll u;
    node* root=nullptr;
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
    return root;
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
               if(curr==root) root=nullptr;

               return;
          }
          else if(curr->right==NULL)
          {      node* temp=curr;
                if(curr==root) {root=root->left;delete temp;}
                else
                {
                    prev->left=curr->left;
                    delete curr;
                }

          }
          else if(curr->left==NULL)
          {
              node* temp=curr;
              if(curr==root) {root=root->right;delete temp;}
              else
              {prev->right=curr->right;delete curr;}
          }
          else
          {  node* temp=curr;
             node* prev=curr;
             curr=curr->right;
             while(1)
             {
                 if(curr->left==NULL) break;
                 prev=curr;
                 curr=curr->left;
             }
             swap(temp->data,curr->data);
             cout<<curr->data<<" "<<prev->data<<endl;

          }
       }
       else if(x<=curr->data)
        erase(curr->left,x,curr);
      else  erase(curr->right,x,curr);

}
int main()
{    ll u;
     root=construct();
    inorder(root);cout<<endl;
    cin>>u;
    erase(root,u);
    inorder(root);cout<<endl;

}
