//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,a,i,b,j,t,x,y,z,tc,u,v,w
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
ll n,k;
ll memo1[200005][2][2],memo2[200005][2][2],memo3[200005][2][2],ans[200005],pow2[200005],ans0[200005],ans1[200005];
ll ways(ll i,ll nd=1,ll x=0)
{
    if(i==n) return (nd==0&&x==0);
    if(memo1[i][nd][x]!=-1) return memo1[i][nd][x];
    ll way1,way2;
      way1=ways(i+1,nd&0,x^0)%mod;
      way2=ways(i+1,nd&1,x^1)%mod;
      return memo1[i][nd][x]=(way1+way2)%mod;
}
ll ways2(ll i,ll nd=1,ll x=0)
{
    if(i==n) return (nd==1&&x==1);
    if(memo2[i][nd][x]!=-1) return memo2[i][nd][x];
    ll way1,way2;
      way1=ways2(i+1,nd&0,x^0)%mod;
      way2=ways2(i+1,nd&1,x^1)%mod;
      return memo2[i][nd][x]=(way1+way2)%mod;
}
ll ways3(ll i,ll nd=1,ll x=0)
{
    if(i==n) return (nd==1&&x==0);
    if(memo3[i][nd][x]!=-1) return memo3[i][nd][x];
    ll way1,way2;
      way1=ways3(i+1,nd&0,x^0)%mod;
      way2=ways3(i+1,nd&1,x^1)%mod;
      return memo3[i][nd][x]=(way1+way2)%mod;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      pow2[0]=1;
      for(i=1;i<=200003;i++) pow2[i]=(pow2[i-1]*2)%mod;
      cin>>tc;
      while(tc--)
      {
          mem(memo1,-1);mem(memo2,-1);mem(memo3,-1);
          cin>>n>>k;
          a=ways(0);b=ways2(0);t=ways3(0);
          cout<<a<<" "<<b<<" "<<t<<endl;
          for(i=k-1;i>=0;i--)
          {
              if(i==k-1) ans[i]=1;
              else ans[i]=(pow2[n]*ans[i+1])%mod;
          }
          f(i,k)
          {
              if(i==0)
              ans0[i]=ans1[i]=1;
              else
              {
                  ans0[i]=(a*ans0[i-1])%mod;
                  ans1[i]=(b*ans1[i-1])%mod;
              }


          }
          ll sum=0;
          f(i,k)
          {
            u=(t*ans[i])%mod;
            u=(u*(ans0[i]+ans1[i]))%mod;
            v=(ans0[i]+ans1[i])%mod;
            sum=(sum+u+v)%mod;


          }

          cout<<(2*mod+sum)%mod<<endl;



      }








}




