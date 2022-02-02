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
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      string s1;
      cin>>s1;
      ll dp[200005][9]={0};
      ll pre[9];
      mem(pre,0);
      n=s1.size();
      f(i,n)
      {
           if(s1[i]=='c')
           {
               if(i==0)
                 dp[i][1]=1;
               else
               {
                   u=pre[1];
                   dp[i][1]=(dp[u][1]+1)%mod;
               }
               pre[1]=i;
           }
           else if(s1[i]=='h')
           {
               if(i==0)
                 dp[i][2]=0;
               else
               {
                   u=pre[2];
                   v=pre[1];
                   dp[i][2]=(dp[u][2]+dp[v][1])%mod;
               }
               pre[2]=i;
           }
             else if(s1[i]=='o')
           {
               if(i==0)
                 dp[i][3]=0;
               else
               {
                   u=pre[3];
                   v=pre[2];
                   dp[i][3]=(dp[u][3]+dp[v][2])%mod;
               }
               pre[3]=i;
           }
             else if(s1[i]=='k')
           {
               if(i==0)
                 dp[i][4]=0;
               else
               {
                   u=pre[4];
                   v=pre[3];
                   dp[i][4]=(dp[u][4]+dp[v][3])%mod;
               }
               pre[4]=i;
           }
             else if(s1[i]=='u')
           {
               if(i==0)
                 dp[i][5]=0;
               else
               {
                   u=pre[5];
                   v=pre[4];
                   dp[i][5]=(dp[u][5]+dp[v][4])%mod;
               }
               pre[5]=i;
           }
             else if(s1[i]=='d')
           {
               if(i==0)
                 dp[i][6]=0;
               else
               {
                   u=pre[6];
                   v=pre[5];
                   dp[i][6]=(dp[u][6]+dp[v][5])%mod;
               }
               pre[6]=i;
           }
             else if(s1[i]=='a')
           {
               if(i==0)
                 dp[i][7]=0;
               else
               {
                   u=pre[7];
                   v=pre[6];
                   dp[i][7]=(dp[u][7]+dp[v][6])%mod;
               }
               pre[7]=i;
           }
             else if(s1[i]=='i')
           {
               if(i==0)
                 dp[i][8]=0;
               else
               {
                   u=pre[8];
                   v=pre[7];
                   dp[i][8]=(dp[u][8]+dp[v][7])%mod;
               }
               pre[8]=i;
           }
      }
      u=pre[8];
      cout<<dp[u][8]<<endl;







}



