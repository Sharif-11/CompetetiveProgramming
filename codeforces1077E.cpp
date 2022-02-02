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
      ll pow[40];
      pow[0]=1;
      for(i=1;i<=35;i++)  pow[i]=pow[i-1]*2;
      map<ll,ll>mp;
      vi vct;
      cin>>n;
      f(i,n)
      {
          cin>>u;
          if(mp.find(u)==mp.end()) mp[u]=1;
          else mp[u]++;

      }
      sitr(itr,mp)
      {
          vct.pb(itr->second);
      }
      sort(vct.begin(),vct.end(),greater<ll>());
      ll sz=vct.size(),ans=0;
      f(i,sz)
      {
          if(i==0)
            vct[i]=ans=vct[i];
          else
          {
              vct[i]=min(vct[i-1]/2,vct[i]);
              if(vct[i]==0) break;
              u=vct[i]*(pow[i+1]-1);
              ans=max(ans,u);
          }
      }
      cout<<ans<<endl;










}




