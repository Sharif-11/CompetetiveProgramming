#include<bits/stdc++.h>
#define f(i,n) for(i=0;i<n;i++)
using namespace std;
typedef long long ll;
ll n,m,arr[50][50],i,j;
ll func(ll k)
{
    if(k%n==0)
        return arr[k/n-1][m-1];
    else
    {
        return arr[k/n][k%n-1];
    }
}
ll binary(ll lo,ll hi,ll x)
{
    ll mid=(lo+hi)/2;
    while(lo<=hi)
    {
       if(func(mid)==x)
            return 1;
       else if(func(mid)<x)
        lo=mid+1;
       else hi=mid-1;
       mid=(lo+hi)/2;
    }
    return 0;
}
int main()
{
    cin>>n>>m;
    ll x;
    f(i,n)
    {
        f(j,m)
        {
            cin>>arr[i][j];
        }
    }
    cin>>x;
    cout<<binary(0,n*m-1,x)<<endl;
}

     