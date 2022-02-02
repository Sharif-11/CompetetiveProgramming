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
ll arr[5005],n;
ll segment(ll i)
{
    if(i==n-1) return i;
    if(arr[i]==0&&arr[i+1]==0) return segment(i+1);
    return i;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n;
      fin(i,arr,n);
      arr[n]=inf;
      ll sum=0;
      for(i=1;i<n;i+=2)
      {
          u=min(arr[i],arr[i-1]);
          sum+=u;
          arr[i]-=u;
          arr[i-1]-=u;

      }
      //fout(i,arr,n);cout<<endl<<sum<<endl;
      for(i=0;i<n;i+=2)
      {
          for(j=i+3;j<n;j+=2)
          {
              if(arr[i]&&arr[j])
              {
                   if(arr[j-1]<=arr[j])
                   {
                       u=min(arr[i],arr[j]);
                       arr[i]-=u; arr[j]-=u;
                       sum+=u;
                       sum++;
                   }
                   else break;
              }
              else
                break;

          }
      }
      for(i=0;i<n;i+=2)
      {
          ll tt=segment(i);


          if(u==1) continue;
          //cout<<i<<" "<<tt<<endl;
          u=tt-i+1-2;
          u/=2;
          sum+=u;

      }
      cout<<sum<<endl;








}
