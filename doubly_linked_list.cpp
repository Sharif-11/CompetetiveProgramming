//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll n,m,a,i,b,j,k,t,x,y,z,tc,u,v,w
#define f(i,n) for(i=0;i<n;i++)
#define mem(a,x) memset(a,x,sizeof(a))
#define sortt(v)  sort(v.begin(),v.end())
#define sitr(itr,st) for(auto itr=st.begin();itr!=st.end();itr++)
#define pr pair<ll,ll>
#define pi acos(-1.00)
#define mod 1000000007
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tr(exp)  exp?yes:no
#define flush fflush(stdout)
#define el cout<<endl
#define ell endl
#define inp(a) scanf("%lld",&a)
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
     node* head=nullptr;
     node *prev=nullptr;
     ll u;
     while(1)
     {    cin>>u;
         if(u==-1) break;
         if(head==nullptr)
         {
             node *curr=new node;
             curr->data=u;
             curr->pre=NULL;
             curr->next=NULL;
             head=curr;
             prev=curr;

         }
         else
         {
            node *curr=new node;
             curr->data=u;
             prev->next=curr;
             curr->pre=prev;
             curr->next=NULL;
             prev=curr;

         }
     }
     return head;

}
void show(node *curr)
{

    while(curr)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
node* insertt(node* curr,ll x)
{
    node* prev=nullptr;
    node* head=curr;
    while(curr)
    {
        if(curr->data<=x)
            prev=curr;
        else break;
        curr=curr->next;
    }
    node *n1=new node;   n1->data=x;
    if(prev)
    {
        n1->pre=prev;
        n1->next=prev->next;
        prev->next=n1;
    }
    else
    {
        n1->pre=NULL;
        n1->next=head;
        head->pre=n1;
        head=n1;
    }
    return head;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      node *head=construct();
      //show(head);
      cout<<endl;
      cin>>k;
      head=insertt(head,k);
      show(head);cout<<endl;








}



