#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,u;
    vector<ll>vct;
    cin>>t>>n;

    for(i=0;i<n;i++)
    {
        cin>>u;
        vct.push_back(u);
    }
    sort(vct.begin(),vct.end());
    ll sum=0,idx=-1;
    for(i=0;i<n;i++)
    {
        sum+=vct[i];
        if(sum<=t) idx=i;
        else break;
    }
    if(idx==-1)
        cout<<"UNLUCKY"<<endl;
    else if(idx==n-1)
        cout<<"BRAVO"<<endl;
    else
        cout<<idx+1<<" assignments done"<<endl;
}
