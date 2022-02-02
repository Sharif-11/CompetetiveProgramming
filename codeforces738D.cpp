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
ll n,p1[1005],p2[1005];
ll findd1(ll x)
{
      if(p1[x]==x) return x;
      return p1[x]=findd1(p1[x]);
}
ll findd2(ll x)
{
    if(p2[x]==x)
         return x;
    return p2[x]=findd2(p2[x]);
}
void union1(ll u,ll v)
{
    p1[findd1(u)]=findd1(v);
}
void union2(ll u,ll v)
{
    p2[findd2(u)]=findd2(v);
}
map<ll,ll>mp[1005];
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;

      cin>>n>>m>>x;
      ll f1=n,f2=n;
      for(i=1;i<=n;i++) p1[i]=p2[i]=i;
      f(i,m)
      {
          cin>>u>>v;
          mp[u][v]=mp[v][u]=1;
           if(findd1(u)!=findd1(v))
            f1--;
          union1(u,v);
      }
      f(i,x)
      {
          cin>>u>>v;
          if(findd2(u)!=findd2(v)) f2--;
          union2(u,v);
      }
      vector<pr>vct;
      for(i=1;i<=n;i++)
      {
          for(j=i+1;j<=n;j++)
          {
              if((findd1(i)==findd1(j))&&(findd2(i)==findd2(j))&&(mp[i].find(j)==mp[i].end())&&f1>1&&f2>1)
              {
                 vct.pb({i,j});
              }
          }
      }
       for(i=1;i<=n;i++)
       {
           for(j=i+1;j<=n;j++)
           {
            if((findd1(i)!=findd1(j))&&(findd2(i)!=findd2(j))&&f1>1&&f2>1)
              {   f1--;f2--;
                   union1(i,j);
                   union2(i,j);
                 vct.pb({i,j});
              }
           }
       }
        ll sz=vct.size();
       cout<<sz<<endl;
       f(i,sz)
       {
           cout<<vct[i].first<<" "<<vct[i].second<<endl;
       }









}




