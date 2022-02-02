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

ll arr[200005],mex2[200005];
vector<ll>adj[200005];
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {  set<ll>st1,st2;
          cin>>n;
          for(i=0;i<=n;i++) adj[i].clear();
          k=0;
          fin(i,arr,n);
         for(i=n-1;i>=0;i--)
         {
             u=arr[i];
             adj[u].pb(i);
         }
          k=-1;ll l=0;
          vi ans;
          for(i=0;i<n;i++)
          {
             st1.insert(arr[i]);
             while(1)
             {
                 if(st1.find(k+1)!=st1.end())
                    k++;
                 else break;
             }
             ll mex=k+1;

                 auto itr=upper_bound(adj[mex].begin(),adj[mex].end(),i);
                 if(itr==adj[mex].end())
                 {
                     ans.pb(mex);
                     st1.clear();
                     k=-1;
                    // cout<<i<<" ";
                 }


          }
        //  cout<<endl;
          ll sz=ans.size();
          cout<<sz<<endl;
          fout(i,ans,sz);
          cout<<endl;

      }








}





