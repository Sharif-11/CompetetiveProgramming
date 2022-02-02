#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[250],memo[250][1005],n,sum,i;
ll ways(ll i,ll val)
{
    if(val<0||i==n) return 0;
    if(val==0) return 1;
    if(memo[i][val]!=-1) return memo[i][val];
    ll way1=0,way2=0;
    way1=ways(i,val-arr[i]);
    way2=ways(i+1,val);
    return memo[i][val]=way1||way2;
}
int main()
{      memset(memo,-1,sizeof(memo));
       cin>>n>>sum;
       for(i=0;i<n;i++) cin>>arr[i];
       if(ways(0,sum))
        cout<<"There exists some elements such that there summation is equal to "<<sum<<endl;
       else cout<<"There is no subset"<<endl;
}

