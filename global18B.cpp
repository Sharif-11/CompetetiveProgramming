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
vector<ll>vct[20];

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      for(i=0;i<20;i++)
      for(i=1;i<=200000;i++)
      {
          bitset<20>bit(i);
          for(j=0;j<20;j++)
          {
              if(bit[j]==0)
                vct[j].pb(i);
          }
      }
      cin>>tc;
      while(tc--)
      {  ll l,r;

          cin>>l>>r;
          ll ans=r-l;
          for(i=0;i<20;i++)
          {
              auto itr=lower_bound(vct[i].begin(),vct[i].end(),l);
              auto it=upper_bound(vct[i].begin(),vct[i].end(),r);
              it--;
              u=itr-vct[i].begin();
              v=it-vct[i].begin();
              if(itr!=vct[i].end())
                {
                    if(vct[i][u]<=r)
                    {
                        k=v-u+1;
                        ans=min(ans,k);

                    }
                    else ans=0;
                }
              else ans=0;


          }
          cout<<ans<<endl;
      }








}





