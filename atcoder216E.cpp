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
ll arr[500005];
ll func(ll n,ll k)
{
    ll u=k*(2*n-k+1);
    return u/2;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n>>k;
      fin(i,arr,n);
      sort(arr,arr+n,greater<ll>());
     // fout(i,arr,n);
      ll sum=0;
while(k){
      f(i,n-1)
      {
          ll u=arr[i]-arr[i+1]+1;
          if(u<=k)
          {
              k-=u;

              sum+=func(arr[i],u);
              arr[i]-=u;
          }
          else
          {
              sum+=func(arr[i],k);
              arr[i]=arr[i]-k;
              k=0;break;
          }
      }
      u=min(k,arr[n-1]);
      sum+=func(arr[n-1],u);
      k-=u;
      arr[n-1]-=u;
      sort(arr,arr+n,greater<ll>());
}



      cout<<sum<<endl;








}




