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
ll n,arr[200005],arr2[200005],sum1[200005],sum2[200005];
ll func(ll k)
{   ll sum,sum3,v;
   ll u=k/4;
   if(u>=n)
       sum=(k-u)*100;
   else
   {
       if(u==0)
           v=0;
       else v=sum1[u-1];
       sum=sum1[n-1]+(k-n)*100-v;


   }
   if(u<=(k-n))
   sum3=sum2[n-1];
   else
   {
       ll t=u-(k-n);
       if(t==0)
          v=0;
       else v=sum2[t-1];
       sum3=sum2[n-1]-v;

   }
   return sum>=sum3;

}
ll binary(ll lo,ll hi)
{   ll x=hi;
    ll mid=(lo+hi)/2;
    while(lo<=hi)
    {
        if(func(mid))
        {
            x=mid;
            hi=mid-1;
        }
        else lo=mid+1;
        mid=(lo+hi)/2;
    }
    return x;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          fin(i,arr,n);fin(i,arr2,n);
          sort(arr,arr+n);sort(arr2,arr2+n);
          f(i,n)
          {
              if(i==0)
                sum1[i]=arr[i];
              else sum1[i]=sum1[i-1]+arr[i];
              if(i==0) sum2[i]=arr2[i];
              else sum2[i]=sum2[i-1]+arr2[i];
          }
          cout<<binary(n,1e17)-n<<endl;

      }







}




