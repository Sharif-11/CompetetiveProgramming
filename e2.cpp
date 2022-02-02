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
/* Fenwick Tree*/
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
map<ll,ll>mp;
ll arr[200005];
ll tree2[200005]={0};
ll read2(ll idx){ll sum=0;while(idx>0){sum+=tree2[idx];idx-=(idx&-idx);}return sum;}
void update2(ll idx,ll val){while(idx<=n){tree2[idx]+=val;idx+=(idx&-idx);}}

int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {   mp.clear();
          cin>>n;
          for(i=0;i<=n+1;i++) tree[i]=tree2[i]=0;
          fin(i,arr,n);
          vector<ll>vct;
          f(i,n) vct.pb(arr[i]);
          sortt(vct);
          f(i,n)
          mp[vct[i]]=i+1;
          deque<ll>Q;
           deque<ll>::iterator  it,itr;
          f(i,n)
          {
              if(i==0)
              {
                  Q.pb(arr[i]);
                  update(mp[arr[i]],1);
              }
              else
              {  ll u,v;

                  a=read(mp[arr[i]]-1);
                  b=read(mp[arr[i]]);
                  b=i-b;
                  if(a<=b)
                    Q.push_front(arr[i]);
                  else Q.pb(arr[i]);
                   update(mp[arr[i]],1);
              }

          }
          ll sum=0;
          k=0;
          sitr(itr,Q)
          {
              u=*itr;
              if(k==0)
              update2(mp[u],1);
              else
              {
                  b=read2(mp[u]);
                  b=k-b;
                  sum+=b;
                  update2(mp[u],1);
              }
              k++;


          }

          cout<<sum<<endl;
      }








}
