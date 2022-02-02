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
ll arr[400005];
ll func(queue<ll>q1,queue<ll>q2)
{  ll sum=0;
    while(!q1.empty())
    {
        ll u=q1.front();
        ll v=q2.front();
        sum+=abs(u-v);
        q1.pop();q2.pop();
    }
    return sum;
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
          ll even=0,odd=0;
          queue<ll>q1,q2;
          f(i,n)
          {
             if(arr[i]%2==1)
             {
                 q1.push(i);
                 odd++;
             }
             else
             {
                 q2.push(i);
                 even++;
             }
          }
        //  cout<<odd<<" "<<even<<endl;
          queue<ll>q3,q4;
          if(n%2==0&&odd!=even) cout<<-1<<endl;
          else if(n%2==1&&abs(odd-even)!=1) cout<<-1<<endl;
          else if(n%2==0)
          {
               queue<ll>q3,q4;
               for(i=0;i<n;i+=2) q3.push(i);
               for(i=1;i<n;i+=2) q4.push(i);
               cout<<min(func(q1,q3),func(q1,q4))<<endl;

          }
          else if(even>n/2)
          {
             for(i=0;i<n;i+=2) q3.push(i);
             cout<<func(q2,q3)<<endl;
          }
          else
          {
              for(i=0;i<n;i+=2) q3.push(i);
              cout<<func(q1,q3)<<endl;
          }
      }








}




