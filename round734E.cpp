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
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
ll n,k,arr[2005],memo[2005][2005];
ll ways(ll i,ll take)
{    if(i==n) return 0;
    if(memo[i][take]!=-1) return memo[i][take];
    ll way1=0;
    ll way2=0;
    way1=(take+1==arr[i])+ways(i+1,take+1);
    way2=ways(i+1,take);
    return memo[i][take]=max(way1,way2);
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n>>k;
          f(i,n+1)
          {
              f(j,n+1)
              memo[i][j]=-1;
          }
          fin(i,arr,n);
          u=ways(0,0);
          if(u<k) cout<<-1<<endl;
          else
          {
              ll ans=n;
              f(i,n)
              {
                  f(j,n)
                  {
                      if(memo[i][j]>=k)
                      {
                          ans=min(ans,n-j);
                      }
                  }
                  //cout<<endl;
              }
              cout<<ans<<endl;
          }
      }








}





