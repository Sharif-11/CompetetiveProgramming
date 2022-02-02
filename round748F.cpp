//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
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
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
string str;
ll n,A,B,memo[41][41][41][41];
struct num
{
    ll i=0,x=0,y=0,cnt=0;
};
num path[41][41][41][41];
ll ways(ll i,ll x=0,ll y=0,ll cnt=0)
{
    if(i==n&&x==0&&y==0&&cnt>0&&n-cnt>0)
    {
        ll u=cnt;
        ll v=n-cnt;
        return abs(u-v);
    }
    else if(i==n) return inf;
    if(memo[i][x][y][cnt]!=-1) return memo[i][x][y][cnt];
    ll way1=inf,way2=inf,u=int(str[i])-'0';
    way1=ways(i+1,(x*10+u)%A,y,cnt+1);
    way2=ways(i+1,x,(y*10+u)%B,cnt);
     if(way1<way2) path[i][x][y][cnt]={i+1,(x*10+u)%A,y,cnt+1};
     else path[i][x][y][cnt]={i+1,x,(y*10+u)%B,cnt};
    return memo[i][x][y][cnt]=min(way1,way2);



}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {  mem(memo,-1);
          cin>>n>>A>>B>>str;
          u=ways(0);
          if(u==inf) cout<<-1<<endl;
          else {
             // cout<<u<<endl;
              num a1;
             for(i=0;i<n;i++)
             {
                 num a2=path[a1.i][a1.x][a1.y][a1.cnt];
                 if(a1.cnt<a2.cnt) cout<<"R";
                 else cout<<"B";
                 a1=a2;
             }
             cout<<endl;

          }




      }








}





