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
string func(string str,ll idx,ll k,ll len)
{
    string ans="9999999999";

    ll i,u,v;char ch;
    set<char>st;
    string tt="";
    f(i,idx)
    {
          st.insert(str[i]);
          tt+=str[i];
    }
     if(st.size()>k) return ans;
     if(str[idx]=='9') return ans;
     if(st.size()==k)
     {
         auto itr=st.upper_bound(str[idx]);
         if(itr!=st.end())
         {
             tt+=*itr;
             for(i=idx+1;i<len;i++)
                tt+=(*(st.begin()));
             return tt;
         }
     }
    u=int(str[idx])-'0'+1;
    ch=char(u+'0');
    st.insert(ch);
    if(st.size()<k)
    {
        tt+=ch;
        for(i=idx+1;i<len;i++) tt+="0";
        return tt;
    }
    else  if(st.size()==k)
    {
        auto itr=st.begin();
        tt+=ch;
        for(i=idx+1;i<len;i++)
            tt+=*itr;
        return tt;

    }
   else return ans;
}
ll func(ll n,ll k)
{   set<ll>st;
    while(n)
    {
        st.insert(n%10);
        n/=10;
    }
    return (st.size()<=k);
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n>>k;
          if(func(n,k))
             cout<<n<<endl;
          else
          {
              ll ans=1111111111;
              string str=to_string(n);
              ll sz=str.size();
              f(i,sz)
              {
                  string tt=func(str,i,k,sz);
                  stringstream iss(tt);
                  iss>>u;
                  ans=min(ans,u);

              }
              cout<<ans<<endl;
          }
      }








}




