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
set<ll>st1,st2;
map<ll,ll>mp1,mp2;
ll arr1[100005]={0},arr2[100005]={0};
ll ans1[100005]={0},ans2[100005]={0};
vector<pr>vct;
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll h;
      cin>>h>>w>>n;
      f(i,n)
      {
          cin>>u>>v;
          vct.pb({u,v});
          st1.insert(u);
          st2.insert(v);
      }
      k=1;
      sitr(itr,st1) arr1[k++]=*itr;
      k=1;
      sitr(itr,st2) arr2[k++]=*itr;
      f(i,n)
      {
         u=arr1[i+1];
         ans1[i+1]=ans1[i]+u-arr1[i]-1;
         mp1[u]=ans1[i+1];
      }
      f(i,n)
      {
          u=arr2[i+1];
          ans2[i+1]=ans2[i]+u-arr2[i]-1;
          mp2[u]=ans2[i+1];
      }
      f(i,n)
      {
          u=vct[i].first;v=vct[i].second;
          cout<<u-mp1[u]<<" "<<v-mp2[v]<<endl;
      }










}




