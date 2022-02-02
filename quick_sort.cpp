#include<bits/stdc++.h>
#define init ll n,m,a,i,b,j,k,t,x,y,z,tc,u,v,w
using namespace std;
typedef long long ll;
ll arr[250];
ll getrandom(ll l,ll r)
{
    ll u=rand();
    return (u%(r-l+1))+l;
}
void Quicksort(ll left,ll right)
{     if(left>right) return;
    ll pivot=getrandom(left,right);
    swap(arr[pivot],arr[left]);
    pivot=left;
    ll lft=left+1;
    ll rgt=right;
    while(lft<=rgt)
    {
        if(arr[lft]<=arr[pivot])
            lft++;
        else if(arr[rgt]>arr[pivot])
            rgt--;
        else
            swap(arr[lft],arr[rgt]);
    }
    swap(arr[pivot],arr[lft-1]);
    Quicksort(left,lft-2);
    Quicksort(lft,right);
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;

      cin>>n;
      for(i=0;i<n;i++) cin>>arr[i];
      Quicksort(0,n-1);
      for(i=0;i<n;i++) cout<<arr[i]<<" ";
      cout<<endl;








}




