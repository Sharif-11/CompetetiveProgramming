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
map<ll,ll>mp;
ll tree[200005],n;
ll read(ll idx)
{
    ll sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx&-idx);
    }
}
void update(ll idx,ll val)
{
    while(idx<=n)
    {
        tree[idx]+=val;
        idx+=(idx&-idx);
    }
}
vector<pr>vct;
vi v1;
ll binary(ll lo,ll hi,ll x)
{
    ll mid=(lo+hi)/2;
    ll ans;
    while(lo<=hi)
    {
        if(read(mid)>=x)
        {
             ans=mid;
             hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
        mid=(lo+hi)/2;
    }
    return ans;

}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>x>>tc;
      ll sz=1;
      v1.pb(x);
      while(tc--)
      {
          cin>>u>>v;
          v1.pb(u);v1.pb(v);
          vct.pb({u,v});
      }
      sortt(v1);
      for(i=0;i<v1.size();i++)
      {
          mp[v1[i]]=i+1;
      }
         update(mp[x],1);
      for(i=0;i<vct.size();i++)
      {
          u=vct[i].first;
          v=vct[i].second;
          update(mp[u],1);
          update(mp[v],1);
          sz+=2;
          cout<<binary(1,200005,sz/2+1)<<endl;
      }











}




