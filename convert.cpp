#include<bits/stdc++.h>
using namespace std;
void func(int n)
{
    cout<<n/365<<" year,";
    n=n%365;
    cout<<(n/7)<<" Weeks,";
    n%=7;
    cout<<n<<" Days"<<endl;
}
int main()
{
    int n,i;
    cin>>n;
    func(n);

}
