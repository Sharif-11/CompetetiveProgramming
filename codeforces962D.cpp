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
multiset<num>st;
vector<num>vct;
bool comp(num x,num y)
{
    return x.v<y.v;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n;
      f(i,n)
      {
          cin>>u;
          st.insert({u,i});
      }
      while(!st.empty())
      {
          auto itr=st.begin();
          num n1=*itr;
          u=n1.u;v=n1.v;
          st.erase(itr);
          if(st.empty())
          {vct.pb(n1);break;}
          else
          {
              auto it=st.begin();
              num n2=*it;
              a=n2.u;b=n2.v;
              if(a==u)
              {
                  st.erase(it);
                  st.insert({2*u,b});
              }
              else
              vct.pb(n1);



          }
      }
      sort(vct.begin(),vct.end(),comp);
      ll sz=vct.size();
      cout<<sz<<endl;
      f(i,sz)
      cout<<vct[i].u<<" ";
      cout<<endl;









}




