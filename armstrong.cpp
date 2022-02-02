#include<bits/stdc++.h>
using namespace std;
bool armstrong(int n)
{
    int num=n;
    int sum=0;
    while(n)
    {
        int u=n%10;
        sum+=pow(u,3);
        n/=10;
    }
    return (sum==num);
}
int main()
{
    int i;
    for(i=100;i<=999;i++)
    {
        if(armstrong(i))
            cout<<i<<" ";

    }
    cout<<endl;
}
