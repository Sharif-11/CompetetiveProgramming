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
struct num
{
    ll n,j;
}n1;
bool operator<(num x,num y)
{
    if(x.n<y.n)
        return 1;
    return (x.j<y.j);
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      num ans[102][102];
      ll arr[102][102];
      cin>>n>>m>>x;
      f(i,n)
      {
          f(j,m)
          {
              cin>>arr[i][j];
          }
      }
      for(i=0;i<n;i++)
      {
          for(j=m-1;j>=0;j--)
          {
              u=arr[i][j]+j;
              if(j==m-1)
              {
                  ans[i][j].n=u;
                  ans[i][j].j=j;
              }
              else if(u<=ans[i][j+1].n)
              {
                  ans[i][j].n=u;
                  ans[i][j].j=j;
              }
              else
                ans[i][j]=ans[i][j+1];
          }
      }











}



