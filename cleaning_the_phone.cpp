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
ll n,m,sum1[200004],sum2[200005],arr[200005],arr2[200005],s1,s2;
vector<ll>vct[3];

ll binary(ll lo,ll hi,ll k)
{
    ll ans=s1+2*s2;
    ll mid=(lo+hi)/2;
    while(lo<=hi)
    {
        if(sum1[k]+sum2[mid]>=m)
        {
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
        mid=(lo+hi)/2;
    }
    return ans;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {    mem(vct,0);
           cin>>n>>m;
           fin(i,arr,n);
           fin(i,arr2,n);
           f(i,n)
           {
               u=arr2[i];
               vct[u-1].pb(arr[i]);
           }
           f(i,2) sort(vct[i].begin(),vct[i].end(),greater<ll>());
           s1=vct[0].size(); s2=vct[1].size();
           sum1[0]=sum2[0]=0;
           //cout<<s1<<" "<<s2<<endl;
           f(i,s1)
           sum1[i+1]=sum1[i]+vct[0][i];

           f(i,s2)
           sum2[i+1]=sum2[i]+vct[1][i];
           if(sum1[s1]+sum2[s2]<m)
            cout<<-1<<endl;
           else
           {
               ll ans=s1+2*s2;
               for(i=0;i<=s1;i++)
               {
                   ans=min(ans,i+2*binary(0,s2,i));
               }
               cout<<ans<<endl;
           }

      }








}





