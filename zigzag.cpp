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
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
ll sum[3004][3005],cnt[3005];
ll cum(ll k,ll i,ll j)
{     if(j<i) return 0;
    if(i==0) return sum[k][j];
    return sum[k][j]-sum[k][i-1];
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll arr[3005];
      cin>>tc;
      while(tc--)
      {
          mem(sum,0);mem(cnt,0);
          cin>>n;
          f(i,n)
          {
              cin>>arr[i];
              cnt[arr[i]]++;
              for(j=0;j<=3000;j++)
              {
                  sum[j][i]=cnt[j];
              }

          }
          ll ans=0;
          for(i=0;i<n;i++)
          {
              for(j=i+1;j<n;j++)
              {
                  u=arr[i];v=arr[j];
                  ans+=(cum(u,j+1,n-1)*cum(v,0,i-1));
              }
          }
          cout<<ans<<endl;
      }








}





