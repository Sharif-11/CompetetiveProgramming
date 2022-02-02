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
ll arr[250];
ll gcd(ll a,ll b)
{
    if(a<b) swap(a,b);
    if(a%b==0) return b;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    ll u=gcd(a,b);
    u=a/u;
    return u*b;
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
        fin(i,arr,n);
        ll g1,g2,lc1,lc2,ans=0;
        for(i=0;i<n;i+=2)
        {
            if(i==0) g1=arr[i];
            else g1=gcd(g1,arr[i]);


        }
        for(i=1;i<n;i+=2)
        {
            if(i==1) g2=arr[i];
            else g2=gcd(g2,arr[i]);


        }
        ll flag=0,flag2=0;
        for(i=1;i<n;i+=2)
        {
            if(arr[i]%g1==0)
                flag=1;
        }
        for(i=0;i<n;i+=2)
        {
            if(arr[i]%g2==0) flag2=1;
        }
        if(flag==0) cout<<g1<<endl;
        else if(flag2==0) cout<<g2<<endl;
        else cout<<0<<endl;


      }








}





