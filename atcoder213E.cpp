//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll a,i,b,j,k,t,x,y,z,tc,u,v,w
#define f(i,n) for(i=0;i<n;i++)
#define mem(a,x) memset(a,x,sizeof(a))
#define sortt(v)  sort(v.begin(),v.end())
#define sitr(itr,st) for(auto itr=st.begin();itr!=st.end();itr++)
#define pr pair<ll,ll>
#define pi acos(-1.00)
#define mod 1000000007
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tr(exp)  exp?yes:no
#define flush fflush(stdout)
#define el cout<<endl
#define ell endl
#define inp(a) scanf("%lld",&a)
using namespace std;
typedef long long ll;
ll memo[505][505],n,m;
char ch[505][505];
bool valid(ll r,ll c)
{
    return (r>=0&&c>=0&&r<n&&c<m);
}
ll dfs(ll i,ll j)
{        if(valid(i,j)==0) return 0;
       if(memo[i][j]!=-1) return memo[i][j];
       if(ch[i][j]=='.')
       {
           return memo[i][j]=min(dfs(i,j+1),dfs(i+1,j));
       }
       else
       {
           return memo[i][j]=1+min(dfs(i,j+1),dfs(i+1,j));
       }

}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      mem(memo,-1);
      cin>>n>>m;
      f(i,n)
      {
          f(j,m)
            cin>>ch[i][j];
      }
      cout<<dfs(0,0)<<endl;








}




