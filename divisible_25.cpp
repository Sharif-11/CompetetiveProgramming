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
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
ll memo[10][3][28][11],n;
string s1;
ll ways(ll i,ll flag=0,ll dig=0,ll div=0)
{
      if(i==n) return (flag==0&&div==0);
      if(memo[i][flag][dig][div]!=-1) return memo[i][flag][dig][div];
      ll way[10]={0};
      ll u=int(s1[i])-'0';
      if(i==0)
      {
         if(s1[i]>'0'&&s1[i]<='9')
            return memo[i][flag][dig][div]=ways(i+1,0,dig,(div*10+u)%25);
      }
      else
      {

      }
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;

     cin>>s1;
     ll ans=0;
     n=s1.size();
     if(s1[0]=='0'&&s1.size()>1) cout<<0<<endl;
     else {
            ll flag=0;
            f(i,n)
            {
                flag+=(s1[i]=='X');
            }


     }







}




