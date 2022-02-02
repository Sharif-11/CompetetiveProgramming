//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll a,i,b,j,t,x,y,z,tc,u,v,w
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
ll dr[]={-1,1};
ll dc[]={-1,-1};
ll n,m,k;
char ch[25][25];
ll visit[25][25]={0};
bool valid(ll i,ll j)
{
    return (i>=0&&j>=0&&i<n&&j<m&&ch[i][j]=='*');
}
void func(ll r,ll c)
{   ll t=1;
    ll cnt=0;
    for(ll i=r-1;i>=0;i--)
    {
        ll v=c-t;
        ll w=c+t;
        if(valid(i,v)&&valid(i,w))
            cnt++;
        else break;
        t++;
    }

    if(cnt>=k)
    {    visit[r][c]=1;
         t=1;
    for(ll i=r-1;i>=0;i--)
    {
        ll v=c-t;
        ll w=c+t;
        if(valid(i,v)&&valid(i,w))
            visit[i][v]=1,visit[i][w]=1;
        else break;
        t++;
    }
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
          mem(visit,0);
          ll flag=0;
          cin>>n>>m>>k;
          f(i,n)
          {
              f(j,m)
              cin>>ch[i][j];
          }
          f(i,n)
          {
              f(j,m)
              {
                  if(ch[i][j]=='*') func(i,j);
              }
          }
          f(i,n)
          {
              f(j,m)
              {
                  if(ch[i][j]=='*'&&visit[i][j]==0)
                    flag=1;
              }

          }
          tr(flag==0);
      }








}





