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
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll arr[25];
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          fin(i,arr,n);
          vi vct,even;
        f(i,n)
        {
            if(arr[i]%2==1) vct.pb(arr[i]);
            else even.pb(arr[i]);
        }
        k=vct.size();
        ll sz=even.size();
        f(i,sz)
        {
            while(even[i]%2==0)
            {
                if(k>0)
                {
                    even[i]/=2;
                    even.pb(vct[k-1]);
                    k--;
                    vct.pop_back();

                }
                else break;
            }
        }
        sz=even.size();
        sortt(even);
        f(i,sz-1)
        {
            while(even[i]%2==0)
            {
                even[i]/=2;
                even[sz-1]*=2;
            }
        }
        ll sum=0;
        f(i,sz) sum+=even[i];
        f(i,vct.size()) sum+=vct[i];
        cout<<sum<<endl;








      }








}





