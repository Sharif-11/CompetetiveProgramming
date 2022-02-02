//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,a,i,b,j,k,t,x,y,z,tc,u,v,w
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
ll arr[7][1005]; ll n;
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
           cin>>n;
         //  for(i=0;i<=n+1;i++) arr[i].clear();
          f(i,n)
          {
              f(j,5)
              {
                  cin>>u;
                  arr[j][i]=u;
              }
          }
          ll flag=0;
          f(i,5)
          {
              for(j=i+1;j<5;j++)
              {
                 ll c0=0,c1=0,c2=0;
                 for(k=0;k<n;k++)
                 {
                     if(arr[i][k]==1&&arr[j][k]==1)
                        c2++;
                     else if(arr[i][k]==1)
                        c0++;
                     else if(arr[j][k]==1)
                        c1++;
                 }
                  u=n/2;
                  if(c0<=u&&c1<=u&&(c2==(n-c0-c1)))
                  {
                      flag=1;break;
                  }
              }
              if(flag) break;
          }
          tr(flag);
      }








}





