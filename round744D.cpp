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
struct num
{
    ll n,idx;
};
bool operator<(num a,num b)
{
    return a.n<b.n;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          multiset<num>st;
          vector<pr>v1;
          f(i,n)
          {
              cin>>u;
              st.insert({u,i+1});
          }
          while(st.size()>1)
          {
              auto itr=st.begin();
              auto it=st.end();
              it--;
              if(itr==it) break;
              num n1=*itr;
              num n2=*it;
              if(n1.n&&n2.n)
              {
                  st.erase(itr);
                  st.erase(it);
                 u=min(n1.idx,n2.idx);
                 v=max(n1.idx,n2.idx);
                 v1.pb({u,v});
                 n1.n--;
                 n2.n--;
                 if(n1.n) st.insert(n1);
                 if(n2.n) st.insert(n2);
              }
             else
             {
                 if(n1.n==0) st.erase(itr);
                 if(n2.n==0) st.erase(it);
             }
          }
          cout<<v1.size()<<endl;
          f(i,v1.size())
          cout<<v1[i].first<<" "<<v1[i].second<<endl;


      }








}





