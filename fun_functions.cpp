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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tr(exp)  exp?yes:no
#define flush fflush(stdout)
#define el cout<<endl
#define ell endl
#define inp(a) scanf("%lld",&a)
using namespace std;
typedef long long ll;
string ff(string str,ll k)
{
    ll i,sz=str.size(),u,carry=0;string ans="";
    for(i=sz-1;i>=0;i--)
    {
        u=int(str[i])-'0';
        if(i==sz-1) u+=k;
          u+=carry;
        carry=u/10;
        ans=char(u%10+'0')+ans;


    }
    if(carry) ans=char(carry+'0')+ans;
      return ans;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;ll mod,sz;
      cin>>tc;
      while(tc--)
      {
        string str,div="";
        mod=0;
        cin>>str;
        ll sz=str.size();
        f(i,sz)
        {
            ll u=int(str[i])-'0';
            ll v=(mod*10+u)/7;
            mod=(mod*10+u)%7;
            if(i==0&&v==0) continue;
            div+=char(v+'0');

        }
          if(div=="") div="0";
         ll carry=0;
         string ttl="";
         sz=div.size();
         for(i=sz-1;i>=0;i--)
         {
             u=int(div[i])-'0';
             u=u*9+carry;
             v=u%10;
             ttl=char(v+'0')+ttl;
             carry=u/10;

         }
         if(carry) ttl=char(carry+'0')+ttl;
           if(mod<=3)
              ttl=ff(ttl,mod);
           else if(mod==4) ttl=ff(ttl,5);
           else if(mod==5) ttl=ff(ttl,7);
           else ttl=ff(ttl,8);
           cout<<ttl<<endl;








      }








}




