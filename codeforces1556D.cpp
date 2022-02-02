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
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll c;
      cin>>n>>k;
      vector<ll>vct;
      cout<<"and 1 2"<<endl;
      flush;
      cin>>u;
      cout<<"or 1 2"<<endl;
      flush;
      cin>>v;
      cout<<"and 2 3"<<endl;
      flush;
      cin>>x;
      cout<<"or 2 3"<<endl;
      flush;
      cin>>y;
      cout<<"and 1 3"<<endl;
      flush;
      cin>>t;
      cout<<"or 1 3"<<endl;
      flush;
      cin>>w;
      b=(u+v+x+y-t-w)/2;
      c=x+y-b;
      a=u+v-b;
      vct.pb(a);vct.pb(b);vct.pb(c);
      for(i=3;i<n;i++)
      {
          cout<<"and "<<i<<" "<<i+1<<endl;flush;
          cin>>u;
          cout<<"or "<<i<<" "<<i+1<<endl;flush;
          cin>>v;
          c=vct[i-1];
          vct.pb(u+v-c);
      }
      sortt(vct);
      cout<<"finish "<<vct[k-1]<<endl;flush;









}





