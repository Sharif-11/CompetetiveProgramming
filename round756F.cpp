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
ll n,k,arr[200005],sum[200005];
ll csum(ll i,ll j)
{
    if(i==0) return sum[j];
    return sum[j]-sum[i-1];
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
      ll l=0,ans=-1,mx=0;

      fin(i,arr,n);
      f(i,n)
      {
          if(i==0) sum[i]=arr[i];
          else sum[i]=sum[i-1]+arr[i];
      }
      f(i,n)
      {
          v=csum(l,i)+k;
         // cout<<l<<" "<<i<<" "<<csum(l,i)+k<<endl;
          if(v>=0)
          {
              u=i-l+1;
              if(u>mx)
              {
                  mx=u;
                  ans=l;
              }
          }
          else
          {
              while(l<=i)
              {
                  l++;
                  v=csum(l,i)+k;
                  if(v>=0) break;
              }
          }
      }
      if(ans==-1) cout<<ans<<endl;
      else cout<<ans+1<<" "<<ans+mx<<endl;







       }
}





