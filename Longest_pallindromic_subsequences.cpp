#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll memo[1005][1005],i,n;
string s1;
ll ways(ll i,ll j)
{   if(i==j) return 1;
    if(i>j) return 0;
    if(memo[i][j]!=-1) return memo[i][j];
    if(s1[i]==s1[j])
        return 2+ways(i+1,j-1);
    else return max(ways(i,j-1),ways(i+1,j));
}
int main()
{  memset(memo,-1,sizeof(memo));
    cin>>s1;
    n=s1.size();
    cout<<ways(0,n-1)<<endl;

}

