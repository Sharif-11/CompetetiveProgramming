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
struct num
{
    ll l,r;
};
bool operator<(num a,num b)
{
    if(a.r-a.l>b.r-b.l)  return 1;
    if(a.r-a.l==b.r-b.l) return a.l<=b.l;
    return 0;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll arr[200005];
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          multiset<num>st;
          st.insert({1,n});
          ll cnt=0;
          while(cnt<n)
          {
              auto itr=st.begin();
              num n1=*itr;st.erase(itr);
              ll l=n1.l;ll r=n1.r;
             // cout<<l<<" "<<r<<endl;
              if((r-l+1)%2==1)
              {
                  arr[(l+r)/2]=cnt+1;
                  k=(l+r)/2;
                  if(k-1>=l) st.insert({l,k-1});
                  if(k+1<=r) st.insert({k+1,r});
              }
              else
              {
                  arr[(l+r-1)/2]=cnt+1;
                  k=(l+r-1)/2;
                  if(k-1>=l) st.insert({l,k-1});
                  if(k+1<=r) st.insert({k+1,r});

              }
              cnt++;

          }
          for(i=1;i<=n;i++) cout<<arr[i]<<" ";
          cout<<endl;


      }








}





