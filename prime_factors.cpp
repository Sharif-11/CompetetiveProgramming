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
typedef int ll;
ll arr[20000005],visit[20000005]={0},divisor[20000005]={0};
map<ll,ll>mp;
void func(ll n)
{
    while(n>1)
    {
      ll  u=divisor[n];
        if(mp.find(u)==mp.end()) mp[u]=1;
        else mp[u]++;
        n/=u;
    }
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>n;
      for(i=2;i<=n;i++)
      {
           if(visit[i]==0)
           {
               for(j=i;j<=n;j+=i)
               {
                   visit[j]=1;
                   if(divisor[j]==0)
                   divisor[j]=i;
               }
           }
      }
       func(n);
      sitr(itr,mp)
      {
         auto it=itr; it++;
         if(it==mp.end())
            cout<<"("<<(itr->first)<<"^"<<(itr->second)<<")"<<endl;
         else
         cout<<"("<<(itr->first)<<"^"<<(itr->second)<<")*";


      }









}




