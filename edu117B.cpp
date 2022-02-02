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
ll arr[250],visit[250];
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {  mem(visit,0);
      vi v1,v2,v3;
          cin>>n>>a>>b;
          v1.pb(a);v2.pb(b);visit[a]=visit[b]=1;
          for(i=b+1;i<=n;i++)
          {  if(visit[i]==0)
              {visit[i]=1;
              v1.pb(i);}
          }
          for(i=1;i<a;i++)
          {  if(visit[i]==0)
              {visit[i]=1;
              v2.pb(i);}
          }
          for(i=1;i<=n;i++)
          {
              if(visit[i]==0)
              {
                  if(v1.size()<n/2) v1.pb(i);
                  else v2.pb(i);
              }
          }
       ll mn=inf,mx=0;
         f(i,v1.size()) mn=min(v1[i],mn);
         f(i,v2.size()) mx=max(mx,v2[i]);
         if(v1.size()==v2.size()&&mn==a&&mx==b)
         {
             fout(i,v1,n/2);
             fout(i,v2,n/2);
             cout<<endl;
         }
         else cout<<-1<<endl;








      }








}





