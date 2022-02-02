#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    if(a<b) swap(a,b);
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main()
{
     int a,b;
     cin>>a>>b;
     cout<<gcd(a,b)<<endl;
}
