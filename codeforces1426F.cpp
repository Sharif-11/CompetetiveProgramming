//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll n,m,a,i,b,j,k,t,x,y,z,tc,u,v,w
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
ll dp[200005][4]={0};
string str;
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n>>str;
      for(i=1;i<=n;i++)
      {
            char ch=str[i-1];
            if(ch=='a')
            {
                  dp[i][1]=(dp[i-1][1]+1)%mod;
                  dp[i][2]=dp[i-1][2]%mod;
                  dp[i][3]=dp[i-1][3]%mod;
            }
            else if(ch=='b')
            {
                  dp[i][1]=dp[i-1][1]%mod;
                  dp[i][2]=(dp[i-1][2]+dp[i-1][1])%mod;
                  dp[i][3]=dp[i-1][3]%mod;
            }
            else if(ch=='c')
            {
                dp[i][1]=dp[i-1][1]%mod;
                dp[i][2]=dp[i-1][2]%mod;
                dp[i][3]=(dp[i-1][3]+dp[i-1][2])%mod;

            }
            else
            {    ll a=0,b=0,c=0;
                  a+=(dp[i-1][1]+1)%mod;
                  b+=dp[i-1][2]%mod;
                  c+=dp[i-1][3]%mod;

                  a+=dp[i-1][1]%mod;
                  b+=(dp[i-1][2]+dp[i-1][1])%mod;
                  c+=dp[i-1][3]%mod;

                  a+=dp[i-1][1]%mod;
                  b+=dp[i-1][2]%mod;
                  c+=(dp[i-1][3]+dp[i-1][2])%mod;
                  dp[i][1]=a%mod;
                  dp[i][2]=b%mod;
                  dp[i][3]=c%mod;

            }

      }
      cout<<dp[n][3]<<endl;








}




