//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 922337203685
#define vi vector<ll>
#define init ll a,i,b,j,k,t,z,tc,u,v,w
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
ll n,m,x,y,memo[1005][5],sum0[140]={0},sum1[140]={0},p0[105]={0},p1[105]={0};
ll csum0(ll i,ll j)
{
    if(i==0) return p1[j];
    return p1[j]-p1[i-1];
}
ll csum1(ll i,ll j)
{
    if(i==0) return p0[j];
    return p0[j]-p0[i-1];
}
ll ways(ll i,ll flag=0)
{
    if(i==m) return 0;
    if(i>m) return inf;
    if(memo[i][flag]!=-1) return memo[i][flag];
    ll ans,u=inf;
    for(ll j=x;j<=y;j++)
    {
        if(i+j-1<m)
        {  if(i+j-1<m-1)
            {
                if(flag==0)
                ans=csum0(i,i+j-1)+ways(i+j,!flag);
                else
                ans=csum1(i,i+j-1)+ways(i+j,!flag);
            }
            else
            {
                if(flag==0)
                return memo[i][flag]=csum0(i,i+j-1);
            else
               return  memo[i][flag]=csum1(i,i+j-1);
            }


        }
        else
        memo[i][j]=ans=inf;
        u=min(ans,u);

    }
    return memo[i][flag]=u;

}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      mem(memo,-1);
      char ch[1005][1005];
      cin>>n>>m>>x>>y;
      f(i,n)
      {
          f(j,m)
          {
              cin>>ch[i][j];
              sum0[j]+=(ch[i][j]=='.');
              sum1[j]+=(ch[i][j]=='#');
          }
      }
      for(i=0;i<m;i++)
      {
         if(i==0)
         {
             p0[i]=sum0[i];
             p1[i]=sum1[i];
         }
         else
         {
             p0[i]=p0[i-1]+sum0[i];
             p1[i]=p1[i-1]+sum1[i];
         }
      }
      u=min(ways(0,0),ways(0,1));
      if(u>=inf) u=-1;
      cout<<u<<endl;









}
