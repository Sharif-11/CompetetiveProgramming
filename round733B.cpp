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
ll dr[]={-1,-1,-1,0,0,1,1,1};
ll dc[]={0,-1,1,-1,1,0,-1,1};
ll n,m;
ll visit[25][25]={0};
bool valid(ll i,ll j)
{
    return (i>=0&&j>=0&&i<n&&j<m&&visit[i][j]==0);
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {       mem(visit,0);
              cin>>n>>m;
              visit[0][0]=visit[0][m-1]=visit[n-1][0]=visit[n-1][m-1]=1;
              for(i=0;i<m;i+=2)
              {
                  if(visit[0][i]==0&&visit[0][i+1]==0)
                    visit[0][i]=1;
              }
              for(j=0;j<n;j+=2)
              {
                  if(visit[j][m-1]==0&&visit[j+1][m-1]==0)
                    visit[j][m-1]=1;
              }
              for(i=0;i<m;i+=2)
              {
                  if(visit[n-1][i]==0&&visit[n-1][i+1]==0)
                    visit[n-1][i]=1;
              }
              for(j=0;j<n;j+=2)
              {
                  if(visit[j][0]==0&&visit[j+1][0]==0)
                    visit[j][0]=1;
              }
              f(i,n)
              {
                  f(j,m)
                  cout<<visit[i][j];
                  cout<<endl;
              }
      }








}




