#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ff(ll n)
{
    ll mx=-1;
    while(n)
    {  ll u=n%10;
        mx=max(mx,u);
        n/=10;
    }
    return mx;
}

int main()
{  ll tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        ll cnt=0;
        while(n)
        {
            if(n==0) break;
            cnt++;
            n-=ff(n);
        }
        cout<<cnt<<endl;
    }
}
