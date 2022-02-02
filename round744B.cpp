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
ll arr[250];
struct num
{
    ll l,r,d;
};
void func(ll l,ll r,ll d)
{
    vi vct;
    for(ll i=l+d;i<=r;i++)
        vct.pb(arr[i]);
    for(ll i=l;i<=l+d-1;i++)
        vct.pb(arr[i]);
        ll k=0;
    for(ll i=l;i<=r;i++)
    {
          arr[i]=vct[k++];
    }
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
          fin(i,arr,n);
          vi vct;
          vector<num>v1;
          f(i,n) vct.pb(arr[i]);
          sortt(vct);
          for(i=n-1;i>=0;i--)
          {
              if(arr[i]!=vct[i])
              {
                  ll idx=i;
                  for(j=i;j>=0;j--)
                  {
                      if(arr[j]==vct[i])
                      {
                          idx=j;
                          break;
                      }
                  }
                  func(idx,i,1);
                  v1.pb({idx+1,i+1,1});
              }
          }
          ll sz=v1.size();
          cout<<sz<<endl;
          f(i,sz)
          cout<<v1[i].l<<" "<<v1[i].r<<" "<<v1[i].d<<endl;

      }








}





