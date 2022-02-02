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
ll gcd(ll a,ll b)
{   if(a==0) return b;
     if(b==0) return a;
    if(a<b) swap(a,b);
    if(a%b==0) return b;
    return gcd(b,a%b);
}
ll arr[500005],tree[800005],arr2[500005],n;
void segment(ll idx,ll l,ll r)
{
    if(l==r)
    {
        tree[idx]=arr2[l];
        return;
    }
    ll left=2*idx;ll right=2*idx+1;
    ll mid=(l+r)/2;
    segment(left,l,mid);
    segment(right,mid+1,r);
    tree[idx]=gcd(tree[left],tree[right]);
}
ll query(ll idx,ll l,ll r,ll i,ll j)
{
    if(i>r||j<l) return 0;
    if(l>=i&&r<=j) return tree[idx];
    ll left=2*idx;
    ll right=2*idx+1;
    ll mid=(l+r)/2;
    ll p1=query(left,l,mid,i,j);
    ll p2=query(right,mid+1,r,i,j);
    return gcd(p1,p2);
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
          ll ans=1;
          if(n==1) {cout<<1<<endl;continue;}
          else
          {
              for(i=1;i<n;i++)
               arr2[i-1]=abs(arr[i]-arr[i-1]);
             //  fout(i,arr2,n-1);cout<<endl;
              segment(1,0,n-2);
              ll l=0;
              for(i=0;i<n-1;i++)
              {
                   u=query(1,0,n-2,l,i);
                   if(u>1)
                   ans=max(ans,i-l+1);
                   else
                   {
                       while(1)
                       {
                           l++;
                           u=query(1,0,n-2,l,i);
                           if(u>1||l>k)
                            break;

                       }
                   }

              }
              cout<<ans+1<<endl;


          }
      }








}




