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
ll arr[200005];
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      ll a,b,c,d,i,n,e,f,k;
      cin>>n;
      cout<<"XOR"<<" "<<1<<" "<<2<<endl;flush;
      cin>>a;
       cout<<"AND"<<" "<<1<<" "<<2<<endl;flush;
      cin>>b;
       cout<<"XOR"<<" "<<2<<" "<<3<<endl;flush;
      cin>>c;
       cout<<"AND"<<" "<<2<<" "<<3<<endl;flush;
      cin>>d;
      e=(a^c);
       cout<<"AND"<<" "<<1<<" "<<3<<endl;flush;
      cin>>f;
      arr[0]=(a-c+2*b-2*d+e+2*f)/2;
      arr[1]=(a+2*b-arr[0]);
      arr[2]=(e+2*f)-arr[0];
      for(i=3;i<n;i++)
      {
          cout<<"XOR"<<" "<<i<<" "<<i+1<<endl;flush;
          cin>>k;
          arr[i]=(k^arr[i-1]);
      }
      cout<<"! ";
      fout(i,arr,n);cout<<endl;flush;










}





