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
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
ll prime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {  ll p,q;
          cin>>p>>q;
          ll ans=0;
          if(1%q!=0)
             ans=1;
          if(p%2==0&&2%q!=0) ans=2;
          if(p%q!=0)
            cout<<max(ans,p)<<endl;
          else if(p<q)
            cout<<max(ans,p)<<endl;
          else
          {
               if(prime(q)==1)
                cout<<p/q<<endl;
               else
               {
                   vi vct,cnt;
                   for(ll i=2;i*i<=q;i++)
                   {
                       if(q%i==0)
                       {    vct.pb(i);k=0;
                           while(q%i==0)
                           {
                               k++;
                               q/=i;
                           }
                          cnt.pb(k);
                       }
                   }
               }

          }

      }







}





