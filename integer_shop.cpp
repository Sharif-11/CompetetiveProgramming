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
ll arr1[200005],arr2[200005],arr3[200005];
struct num
{
    ll u,v;
};
bool operator<(num x,num y)
{
    if(x.u<y.u) return 1;
    if(x.u==y.u) return x.v<y.v;
    return 0;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
     cin>>tc;
     while(tc--)
     {   map<num,ll>mp;
     ll mn=inf,mx=0,id1=-1,id2=-1;
          cin>>n;
          f(i,n)
          {
              cin>>arr1[i]>>arr2[i]>>arr3[i];
              if(arr1[i]<mn)
                mn=arr1[i],id1=i;
              else if(arr1[i]==mn&&arr3[i]<arr3[id1])
                id1=i;
              if(arr2[i]>mx)
                mx=arr2[i],id2=i;
              else if(arr2[i]==mx&&arr3[i]<arr3[id2])
                id2=i;
              num n1={arr1[i],arr2[i]};
              if(mp.find(n1)==mp.end()) mp[n1]=arr3[i];
              else mp[n1]=min(arr3[i],mp[n1]);
              n1={mn,mx};
            //  cout<<id1<<" "<<id2<<endl;
              ll ans=inf;
              if(mp.find(n1)!=mp.end()) ans=mp[n1];
               ans=min(ans,arr3[id1]+arr3[id2]);
               cout<<ans<<endl;
          }


     }







}





