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
ll arr[400005];
ll func(ll pre,ll x)
{
    bitset<32>b1(pre);
    bitset<32>b2(x);
    bitset<32>ans(0);
    for(ll i=0;i<32;i++)
    {
       if(b1[i]==1)
        ans[i]=1;
       else
       {   ll u=(b2[i]&b1[i]);
           if(u==b1[i])
              ans[i]=0;
           else ans[i]=1;
       }
    }
    return ans.to_ullong();
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;

      cin>>tc;
      while(tc--)
      {
          cin>>n;
          vi ans;
          fin(i,arr,n);
          f(i,n)
          {
              if(i==0)
              {
                  u=(func(0,arr[i]));
                  ans.pb(u);
              }
              else {u=(func((arr[i]^ans[i-1]),arr[i]));ans.pb(u);};
          }
          fout(i,ans,n);
          cout<<endl;

      }








}




