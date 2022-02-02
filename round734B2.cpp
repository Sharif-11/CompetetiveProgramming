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
ll arr[200005],ans[200005];
set<ll>vct[200005];
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {   map<ll,ll>mp;
          cin>>n>>k;
          f(i,n+1) vct[i].clear();
          f(i,n)
          {
              cin>>arr[i];
              if(mp.find(arr[i])==mp.end()) mp[arr[i]]=1;
              else mp[arr[i]]++;
              ans[i]=mp[arr[i]];
          }
          ll cnt=0;
          sitr(itr,mp)
          {
             if(itr->second<k)
                cnt+=itr->second;
          }
          cnt=(cnt/k)*k;
          vi col;
          ll t=1;
          f(i,n)
          {
              u=mp[arr[i]];
              if(u>=k)
              {
                  if(ans[i]<=k)
                    col.pb(ans[i]);
                  else col.pb(0);

              }
              else if(cnt&&vct[t].find(arr[i])==vct[t].end())
              {
                  col.pb(t); vct[t].insert(arr[i]);
                  if(t==k) t=0;
                  t++;
                  cnt--;
              }
              else  col.pb(0);
          }
         fout(i,col,n);cout<<endl;




      }








}



