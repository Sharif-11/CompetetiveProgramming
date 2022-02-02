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
ll visit[3][500],n;
char ch[3][400];
ll dr[]={0,0,-1,-1,-1,1,1,1};
ll dc[]={1,-1,-1,0,1,-1,0,1};
bool valid(ll r,ll c)
{
    return (r>=0&&c>=0&&r<=1&&c<n&&ch[r][c]=='0'&&visit[r][c]==0);
}
void dfs(ll i,ll j)
{
    visit[i][j]=1;ll k;
    f(k,8)
    {
        ll u=i+dr[k];
        ll v=j+dc[k];
        if(valid(u,v)) dfs(u,v);
    }

}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {   mem(visit,0);
          cin>>n;
          f(i,2)
          {
              f(j,n) cin>>ch[i][j];
          }
          dfs(0,0);
          if(visit[1][n-1])
            yes;
          else no;



      }








}





