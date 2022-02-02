//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,a,i,b,j,k,t,x,y,z,tc,u,v,w
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
string s1;
ll n;
ll segment(ll i)
{
    if(i==n) return i-1;
    if(s1[i]!=s1[i+1]) return i;
    return segment(i+1);
}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {

          cin>>n>>a>>b;
          cin>>s1;
          if(b>=0)
            cout<<n*a+n*b<<endl;
          else
          {  ll ans=0;
              vi v1,v2;
             for(i=0;i<n;i++)
             {
                 ll tt=segment(i);
                 u=tt-i+1;
                 if(s1[i]=='0') v1.pb(u);
                 if(s1[i]=='1') v2.pb(u);
                 i=tt;


             }
            // fout(i,v1,v1.size());cout<<endl;
             //fout(i,v2,v2.size());cout<<endl;
             ll sz=v1.size();

             ll sum=0;
             f(i,sz)
             {
                 ans+=v1[i]*a+b;
                 sum+=v1[i];
             }
             ans+=(n-sum)*a+b;
             sum=0;ll cnt=0;
             f(i,v2.size())
             {
                 cnt+=v2[i]*a+b;
                 sum+=v2[i];
             }
             cnt+=(n-sum)*a+b;
             cout<<max(ans,cnt)<<endl;

          }

      }








}




