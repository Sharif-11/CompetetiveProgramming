#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pow10[19],arr2[200005];
void counting(ll arr[],ll n,ll idx)
{
    ll  cnt[10]={0},i;
    for(i=0;i<n;i++)
    {
        ll u=(arr[i]/pow10[idx])%10;
        cnt[u]++;
    }

    for(i=1;i<10;i++) cnt[i]=cnt[i-1]+cnt[i];
    for(i=n-1;i>=0;i--)
    {
        ll u=(arr[i]/pow10[idx])%10;
        arr2[cnt[u]-1]=arr[i];
        cnt[u]--;
    }
    for(i=0;i<n;i++) arr[i]=arr2[i];


}
int main()
{
      ll i,j,n,u,arr[200005];

      pow10[0]=1;
      for(i=1;i<19;i++) pow10[i]=pow10[i-1]*10;
      cout<<"Number of elements of the array is: ";
      cin>>n;
      cout<<"Enter elements of the array: "<<endl;
      for(i=0;i<n;i++)
      {
          cin>>arr[i];

      }

      for(i=0;i<=18;i++) counting(arr,n,i);
      cout<<"The sorted array is:"<<endl;
      for(i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;


}
