//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,i,j,k,t,z,tc,u,v,w
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
ll n,x,y,A,B;
ll func(ll k)
{
    ll a=0,b=0;
    if(k%2==1)
    {
        b=k/2+1;
        a=(k-b);
        a+=(A-b);
        b+=(B-k/2);
       // cout<<a<<" "<<b<<endl;
        if(a==x&&b==y) return 1;
        if(a==y&&b==x) return 1;

    }
    else

    {

        a=A;b=B;
        //cout<<a<<" "<<b<<endl;
               if(a==x&&b==y) return 1;
        if(a==y&&b==x) return 1;

    }
    return 0;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>x>>y;
          n=x+y;
          if(n%2==1) {A=n/2+1;B=n-A;}
          else A=B=n/2;
          vi ans;
          for(i=0;i<=n;i++)
          {
              if(func(i)) ans.pb(i);
          }
          ll sz=ans.size();
          cout<<sz<<endl;
          fout(i,ans,sz);cout<<endl;

      }








}




