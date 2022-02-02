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
ll n;
string str;
ll segment(ll i)
{
    if(i==n) return i-1;
    if(str[i]!=str[i+1]) return i;
    return segment(i+1);
}
string func(ll len,char pre='8',char post='9')
{
     string s1="",s2="";ll i;
     f(i,len)
     {
         if(i%2==0)
            s1+="B",s2+="R";
            else s1+="R",s2+="B";
     }
     ll cnt=0,cnt2=0;
     cnt=(pre==s1[0])+(post==s1[len-1]);
     cnt2=(pre==s2[0])+(post==s2[len-1]);
      if(cnt<cnt2)
        return s1;
      else return s2;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n>>str;
           string ans="";
          vector<pr>vct;
          f(i,n)
          {
                if(str[i]!='?')
                {
                    ans+=str[i];
                }
                else
                {
                  ll tt=segment(i);
                  u=tt-i+1;
                  char c1,c2;
                  if(i==0)
                     c1='8';
                  else c1=str[i-1];
                  if(tt+1==n)
                    c2='8';
                  else c2=str[tt+1];
                  ans+=func(u,c1,c2);
                  i=tt;

                }
          }
          cout<<ans<<endl;
      }









}




