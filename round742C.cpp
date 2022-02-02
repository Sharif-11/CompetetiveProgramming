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
string str;
ll n,memo[15][8192][2],f=0;
ll sett(ll n,ll k)
{
    return  (n|(1<<k));
}
bool check(ll n,ll k)
{
    return (n&(1<<k));
}
ll ways(ll i,ll num=0,ll flag=0)
{
      if(i==10)
      {
               if(flag==0)
                f=1;
               return 1;
      }
      if(memo[i][num][flag]!=-1) return memo[i][num][flag];
      ll way[10]={0},ans=0,j,u;
      u=int(str[i])-'0';
      ll carry=check(num,i);
      f(j,10)
      {
         ll v=u-j-carry;
         if(v>=0&&v<=9)
            way[j]=ways(i+1,num,flag|(j!=v));
         else if(10+v-j>=0&&10+v-j<=9)
         {
               if(i+2<10)
                    way[j]=ways(i+1,sett(num,i+2),(flag|((10+v-j)!=j)));

         }
         ans+=way[j];
      }
      return memo[i][num][flag]=ans;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {   mem(memo,-1);
          cin>>str;
          reverse(str.begin(),str.end());
          ll sz=str.size();
          f(i,10-sz) str+="0";
          cout<<ways(0)<<endl;

      }








}




