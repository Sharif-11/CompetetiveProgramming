#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll memo[1005][1005];
ll nCr(ll n,ll r)
{   if(n==r) return 1;
    if(r==0) return 1;
    if(n<r) return -INT_MAX;
    if(memo[n][r]!=-1) return memo[n][r];
    return memo[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
}
int main()
{  memset(memo,-1,sizeof(memo));
    ll n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;

}
