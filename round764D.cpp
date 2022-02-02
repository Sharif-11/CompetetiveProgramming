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
ll vis[35],cnt[35];

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {  mem(vis,0);mem(cnt,0);
          string s1;
          cin>>n>>k;

          cin>>s1;

          f(i,n)
          {
              u=int(s1[i])-'a';
              vis[u]++;
          }
          ll ttl=0,odd=0;
          for(i=0;i<26;i++)
          {
               u=vis[i]/2;

                ttl+=u;
               vis[i]=vis[i]%2;
               odd+=vis[i];

          }
            u=ttl/k;
             v=ttl%k;
             if(v==0)
             {
                 cout<<u*2+(odd>0)<<endl;
             }
             else
             {
                 if(v*2>=k) cout<<u*2+1<<endl;
                 else cout<<u*2+(odd>0)<<endl;
             }






      }








}





