#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[250],n,i;
ll upperr_bound(ll lo,ll hi,ll x)
{   // This function return the size of array(n) if there is no upper bound
    ll mid=(lo+hi)/2;
    ll ans=n;
    while(lo<=hi)
    {
        if(arr[mid]>x)
        {
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
        mid=(lo+hi)/2;
    }
    return ans;
}
int main()
{  ll x;
    cin>>n;
    for(i=0;i<n;i++) cin>>arr[i];
     cin>>x;
     ll u=upperr_bound(0,n-1,x-1);
     ll v=upperr_bound(0,n-1,x);
     cout<<v-u<<endl;
}
