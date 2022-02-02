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
ll n,m;
queue<ll>Q[200005];
struct node
{
    ll data,idx;
}n1;
bool operator<(node x,node y)
{
    return (x.data<y.data);

}
vi adj[400005];
vi v1;
set<ll>s1,s2;
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n>>m;
      f(i,m)
      {
          cin>>k;
          f(j,k)
          {
              cin>>u;
              Q[i].push(u);
          }
      }
      ll sum=0;
      f(i,m)
      {
          u=Q[i].front();
          v1[u].pb(i);
          if(v1[u].size()==1)
            s1.insert(u);
         else s2.insert(u);







      }
      while(1)
      {
           ll flag=0;
          sitr(itr,s2)
          {   flag=1;
              u=*itr;
              a=v1[u][0];b=v1[u][1];
              Q[a].pop();
              Q[b].pop();
              if(!Q[a].empty())
              {
                  t=Q[a].front();
                  v1[t].pb(a);
                  if(v1[t].size()==1)
                  s1.insert(t);
                  else s2.insert(t);



              }
              sum+=2;
          }
          if(flag==0)
          {
              cout<<"No"<<endl;exit(0);
          }


      }
      cout<<"Yes"<<endl;








}




