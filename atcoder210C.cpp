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
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
        map<ll,ll>mp;
      ll arr[500005];
      cin>>n>>k;
      fin(i,arr,n);
      for(i=0;i<k;i++)
      {
            if(mp.find(arr[i])==mp.end()) mp[arr[i]]=1;
            else mp[arr[i]]++;
      }
      ll ans=mp.size();
      for(i=0;i<n-k;i++)
      {
          u=arr[i];
          if(mp[u]==1) mp.erase(u);
          else mp[u]--;
          v=arr[i+k];
          if(mp.find(v)==mp.end()) mp[v]=1;
          else mp[v]++;
          ll sz=mp.size();
          ans=max(ans,sz);
      }
      cout<<ans<<endl;










}




