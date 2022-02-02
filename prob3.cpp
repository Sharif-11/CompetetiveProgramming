#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll n)
{
    if(n==0) return 1;
    if(n%2==1) return 4+func(n-1);
    return 3+func(n/2);
}
int main()
{
     ll i,tc,n;
       cin>>tc;
       while(tc--)
       {
           cin>>n;
           cout<<func(n)<<endl;
       }
}
