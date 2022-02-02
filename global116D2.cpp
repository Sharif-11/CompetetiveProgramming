//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll a,i,b,j,k,t,x,y,z,tc,u,v,w
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
struct num
{
    ll n,idx;
};
bool operator<(num x,num y)
{
    if(x.n<y.n) return 1;
    if(x.n==y.n) return x.idx>y.idx;
    return 0;
}
ll tree[305],n,m;
ll read(ll idx)
{
    ll sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx&-idx);
    }
    return sum;
}
void update(ll idx,ll val)
{
    while(idx<=n*m)
    {
        tree[idx]+=val;
        idx+=(idx&-idx);
    }
}
ll func(vector<ll>v1)
{
    ll sz=v1.size(),i;
   // fout(i,v1,sz);cout<<endl;
    mem(tree,0);
    ll sum=0;
    f(i,sz)
    {
        ll u=v1[i];
        sum+=read(u-1);
        update(u,1);

    }
    return sum;

}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          vector<num>vct;
          cin>>n>>m;
          f(i,n*m)
          {
              cin>>u;
              vct.pb({u,i+1});
          }
          sortt(vct);
          vector<ll>v1[302];
          f(i,n*m)
          {
              v1[i/m].pb(vct[i].idx);
          }

          ll sum=0;
          f(i,n)
          {
                fout(j,v1[i],m);cout<<endl;
          }
         //cout<<sum<<endl;


      }








}




