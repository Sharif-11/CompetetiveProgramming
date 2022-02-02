//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,a,i,b,j,t,x,y,z,tc,u,v,w
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
 vi v1;
 ll n;
 ll segment(ll i)
 {
      if(i==n) return i-1;
      if(v1[i]+1!=v1[i+1]) return i;
      return segment(i+1);
 }
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll k,arr[200005];
      cin>>tc;
      while(tc--)
      {   vi vct;
          v1.clear();
          map<ll,ll>mp;
          cin>>n>>k;
          f(i,n)
          {
              cin>>arr[i];
              mp[arr[i]]=i;
          }
          f(i,n)  vct.pb(arr[i]);
          sortt(vct);
          ll cnt=0;
          f(i,n)
           v1.pb(mp[vct[i]]);
           f(i,n)
           {
               ll tt=segment(i);
                cnt++;
               i=tt;
           }
           tr(k>=cnt);

      }








}




