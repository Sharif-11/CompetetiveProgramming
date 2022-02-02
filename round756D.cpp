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
ll n,arr[200005],p[200005],tim[200005],dist[200005];

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {  vector<pr>edge;
          ll root=-1;
          cin>>n;
          fin(i,arr,n);
          fin(i,p,n);
          f(i,n)
          {
              u=arr[i];
              edge.pb({u,i+1});
              if(u==i+1) root=u;
          }
          f(i,n)
          {
              u=p[i];
              tim[u]=i;
          }
          ll flag=0;
          f(i,n)
          {
              u=edge[i].first;
              v=edge[i].second;
              if(tim[u]>tim[v])
              {flag=1;break;}
          }
          if(flag==1)
             cout<<-1<<endl;
          else
          {
              ll sum=0;
              dist[root]=0;
              for(i=1;i<n;i++)
              {
                  u=p[i];
                  u=arr[u-1];
                  v=p[i];
                 // cout<<u<<" "<<v<<endl;
                  dist[v]=sum+1;
                  sum++;
              }
            f(i,n)
            {
                u=edge[i].first;
                v=edge[i].second;
                cout<<dist[v]-dist[u]<<" ";
            }
            cout<<endl;

          }

      }









}





