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
      ll arr[3][100005],sum1[100005],sum2[100005];
      cin>>tc;
      while(tc--)
      {
          cin>>m;

          f(i,2)
          {
              f(j,m)
              cin>>arr[i][j];
          }
          f(i,m)
          {
              if(i==0)
                sum1[i]=arr[0][i],sum2[i]=arr[1][i];
              else sum1[i]=sum1[i-1]+arr[0][i],sum2[i]=sum2[i-1]+arr[1][i];
          }
          ll ans=inf;
          if(m==1){cout<<0<<endl;continue;}
          f(i,m)
          {
              if(i==0) ans=sum1[m-1]-sum1[0];
              else if(i==m-1)
                ans=min(ans,sum2[m-2]);
              else
                ans=min(ans,max(sum1[m-1]-sum1[i],sum2[i-1]));

          }
          cout<<ans<<endl;


      }








}
