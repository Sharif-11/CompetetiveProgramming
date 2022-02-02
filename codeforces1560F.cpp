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
ll n1,n2,sz;
set<ll>st;
void ways(ll i,ll sum=0)
{       if(i==10)
     {st.insert(sum);return;}
     ways(i+1,sum*10+n1);
     ways(i+1,sum*10+n2);
     ways(i+1,sum);


}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      f(i,10)
      {
          f(j,10)
          {
              n1=i;n2=j;
              ways(0);
          }
      }
      cin>>tc;
      while(tc--)
      {
          cin>>n>>k;
          if(k==2)
            cout<<*(st.lower_bound(n))<<endl;
          else
          {  ll len=log10(n)+1;
             ll ans=inf;
              f(i,10)
              {    ll sum=0;
                  f(j,len)
                  sum=sum*10+i;
                  if(sum>=n)
                    ans=min(sum,ans);

              }
              cout<<ans<<endl;
          }
      }










}



