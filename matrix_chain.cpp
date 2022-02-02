#include<bits/stdc++.h>
#define inf 1e18

using namespace std;
typedef long long ll;
ll n,arr[1005],memo[1005][1005];
ll ways(ll i,ll j)
{  if(i==j) return 0;
    if(memo[i][j]!=-1) return memo[i][j];
    ll ans=inf;
    for(ll k=i;k<j;k++)
    {
        ll val=ways(i,k)+ways(k+1,j)+arr[i-1]*arr[k]*arr[j];
        ans=min(ans,val);
    }
    return memo[i][j]=ans;
}
int main()
{
    memset(memo,-1,sizeof(memo));
    cin>>n;
    for(ll i=0;i<n;i++) cin>>arr[i];
    cout<<ways(1,n-1)<<endl;
}
