#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod(string str,ll m)
{
    ll sum=0;
    ll i,sz=str.size();
    for(i=0;i<sz;i++)
    {
        ll u=int(str[i])-'0';
        sum=(sum*10+u)%m;
    }
    return sum;
}
int main()
{
    string str;
    ll m;
    cin>>str>>m;
    cout<<mod(str,m)<<endl;
}
