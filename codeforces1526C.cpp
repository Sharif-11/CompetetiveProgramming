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
struct node {ll n;};
bool operator<(node a,node b)
{
    return a.n>b.n;

}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll sum=0,arr[200005],cnt=0;
      cin>>n;fin(i,arr,n);
      priority_queue<node>PQ;
      f(i,n)
      {
          if(sum+arr[i]>=0)
          {
              sum+=arr[i];
              cnt++;
              if(arr[i]<0) PQ.push({arr[i]});

          }
          else
          {
              if(!PQ.empty())
              {
                 node n1=PQ.top();u=n1.n;
                  if(arr[i]>u)
                  {
                      PQ.pop();
                      sum-=u;
                      sum+=arr[i];
                      PQ.push({arr[i]});
                  }
              }
          }
      }
      cout<<cnt<<endl;









}



