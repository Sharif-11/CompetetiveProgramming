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
      set<ll>st;
      ll sum=0;
      cin>>n;
      f(i,n)
      {
          cin>>u;
          st.insert(u);
          sum+=u;
      }
      cin>>m;
      while(m--)
      {
          cin>>x>>y;
          auto itr=st.lower_bound(x);
          ll ans=inf;
          u=inf;v=-1;
          if(itr!=st.end())
          {
              u=*itr;
          }
          if(itr!=st.begin())
          {
              itr--;
              v=*itr;
          }
          if(v!=-1&&u!=inf)
          {   //cout<<"s2"<<endl;
              //cout<<u<<" "<<v<<endl;
              ll ans=0;
              k=sum-u;
              if(y>k) ans+=y-k;
              ll ans2=x-v;
              k=sum-v;
              if(y>k) ans2+=y-k;
              cout<<min(ans,ans2)<<endl;
          }
          else if(u==inf)
          {    //cout<<"s3"<<endl;
              ll ans=x-v;
              k=sum-v;
              if(y>k) ans+=y-k;
              cout<<ans<<endl;
          }
          else
          {   // cout<<"s4"<<endl;
              ll ans=0;
              k=sum-u;
              if(y>k)  ans+=y-k;
              cout<<ans<<endl;
          }
      }















}





