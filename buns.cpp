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
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
ll n,m,c0,d0,stuff[15],req[15],dough[15],profit[15],memo[15][105][1005];
ll ways(ll i,ll st,ll cap)
{
    if(cap<0||st<0) return -inf;
    if(cap==0) return 0;
    if(i==m) return 0;
    if(memo[i][st][cap]!=-1) return memo[i][st][cap];
    ll way1=0,way2=0;

        way1=profit[i]+ways(i,st-req[i],cap-dough[i]);
        way2=ways(i+1,stuff[i+1],cap);
        return memo[i][st][cap]=max(way1,way2);


}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n>>m>>c0>>d0;
      stuff[m]=0;req[m]=0;
      dough[m]=c0;
      profit[m]=d0;
      f(i,m)
      {
          cin>>stuff[i]>>req[i]>>dough[i]>>profit[i];
      }
      m++;
      mem(memo,-1);
      cout<<ways(0,stuff[0],n)<<endl;









}





