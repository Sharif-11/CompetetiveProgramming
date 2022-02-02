#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node
{
    ll data;
    node* left;
    node* right;
};
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

        if(curr->left) inorder(curr->left);
        cout<<curr->data<<" ";
        if(curr->right) inorder(curr->right);

}
void preorder(node* curr)
{
         cout<<curr->data<<" ";
        if(curr->left) preorder(curr->left);
        if(curr->right) preorder(curr->right);

}
void postorder(node* curr)
{

        if(curr->left) postorder(curr->left);
        if(curr->right) postorder(curr->right);
        cout<<curr->data<<" ";

}
bool findd(node* curr,ll x)
{     if(!curr) return 0;
    if(curr->data== x) return 1;
    if(x<curr->data)  return findd(curr->left,x);
    else  return findd(curr->right,x);
}

int main()
{
       node* root=construct();
       inorder(root);
       cout<<endl;
       cout<<findd(root,60)<<endl;

}
