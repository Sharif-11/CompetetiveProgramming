//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll a,i,b,j,k,t,x,y,z,tc,u,v,w
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
char ch[250][250];
ll n,m;
ll vct[250]={0};
struct num
{
    ll id;
};
bool operator<(num x,num y)
{
    if(vct[x.id]>vct[y.id]) return 1;
    if(vct[x.id]==vct[y.id]) return x.id<y.id;
    return 0;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;

      cin>>n>>m;
      f(i,2*n)
      {
          f(j,m)
          {
              cin>>ch[i][j];
          }
      }
      vi ans;
      f(i,2*n)
      {   vector<num>v2;
          for(j=0;j<2*n;j++)
          v2.pb({j});
          sortt(v2);
          f(j,m)
          {
              u=v2[j].id;v=v2[j+n].id;
              char c1=ch[u][j];
              char c2=ch[v][j];
              if(c1=='G')
              {
                  if(c2=='C')
                     vct[u]++;
                  else if(c2=='P')
                    vct[v]++;

              }
              else if(c1=='C')
              {
                  if(c2=='P')
                     vct[u]++;
                  else if(c2=='G')
                    vct[v]++;
              }
              else
              {
                  if(c2=='G')
                     vct[u]++;
                  else if(c2=='C')
                    vct[v]++;
              }

          }
          sortt(v2);
          ans.pb(v2[i].id+1);


      }
      fout(i,ans,2*n);
      cout<<endl;









}





