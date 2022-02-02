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
ll arr[200005],n,ans[200005],ans2[200005];
ll func(ll k)
{
    ll l=0,r=n-1;
    while(l<r)
    {
        if(arr[l]==arr[r])
        {
            l++;
            r--;
        }
        else if(arr[l]!=k&&arr[r]!=k)
            return 0;
        else if(arr[l]==k)
            l++;
        else if(arr[r]==k)
            r--;
    }
    return 1;
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

          fin(i,arr,n);
          ll l=0,r=n-1;
          ll flag=0;
          set<ll>st;
          while(l<r)
          {
              if(arr[l]==arr[r])
              {
                  l++;
                  r--;
              }
              else
              {   flag=1;
                  st.insert(arr[l]);
                  st.insert(arr[r]);
                  break;
              }
          }
          if(flag==0)
          yes;
          else
          {
              ll flag=0;
              sitr(itr,st)
              {
                  u=*itr;
                  flag+=func(u);
              }
              tr(flag);
          }



      }








}





