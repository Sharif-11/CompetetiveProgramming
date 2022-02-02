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
ll gcd(ll a,ll b)
{   if(a==0) return b;
    if(b==0) return a;
    if(a<b) swap(a,b);
    if(a%b==0) return b;
    return gcd(b,a%b);
}
ll arr[125];
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          fin(i,arr,n);
          sort(arr,arr+n);
          if(arr[0]==arr[n-1])
          {
              cout<<-1<<endl;

          }
          else
          {
                vi vct;
                for(i=0;i<n-1;i++)
                {
                    vct.pb(arr[i+1]-arr[i]);
                }
                ll sz=vct.size();
                ll ans=vct[0];
                for(i=0;i<sz;i++)
                {
                    ans=gcd(ans,vct[i]);
                }
                cout<<ans<<endl;
          }



      }








}





