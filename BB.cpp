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
ll arr[200004];
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n>>a>>b;
          if((a+b)>(n-2))
            cout<<-1<<endl;
          else if(abs(a-b)>1)
            cout<<-1<<endl;
          else
          {                     deque<ll>Q;
              if(a==b)
              {

                  for(i=1;i<=a+1;i++)
                  {Q.push_back(2*i);Q.push_back(2*i-1);}
                  for(i=2*a+3;i<=n;i++)
                     Q.push_front(i);

              }
              else if(a<b)
              {
                    for(i=1;i<=a+1;i++)
                    {
                        Q.pb(2*i);Q.pb(2*i-1);
                    }
                    Q.pb(2*a+3);
                    for(i=2*a+4;i<=n;i++)
                        Q.push_front(i);

              }
              else if(a>b)
              {   for(i=1;i<=n-2*a;i++)
                  Q.pb(i);
                  k=n-a+1;
                  u=n-2*a;
                  for(i=k;i<=n;i++)
                  {
                      Q.pb(i);Q.pb(u+1);
                      u++;
                  }

              }
              while(!Q.empty())
                  {
                      auto itr=Q.begin();
                      cout<<*itr<<" ";
                      Q.pop_front();
                  }
                  cout<<endl;
          }
      }








}





