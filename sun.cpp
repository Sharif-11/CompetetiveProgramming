#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *r;
node *l;

};

void add(node* root,node* n)
{  if(n->data > root->data)
   {
       if(root->r==0)
       {
           root->r=n;

       }
       else
       {
           add(root->r,n);
       }
    }
    else
    {
        if(root->l==0)
       {
           root->l=n;
       }
       else
       {
           add(root->l,n);
       }

    }

}
void inorder(node *root)
{
    if(root==0){return;}
    else{
    inorder(root->l);
    cout<<root->data<<" ";
    inorder(root->r);
    }
}

int main()
{   node* root=nullptr;


int t;
    while(1){

    cin>>t;
    if(t==-1){break;}
    else {
           node* n=new node;
            n->data=t;
            n->l=0;
            n->r=0;
        if(root==nullptr)
        root=n;
        else add(root,n);


    }


}
inorder(root);
}


