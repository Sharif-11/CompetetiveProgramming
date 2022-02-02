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
string func(string s1,ll a,ll b)
{
    ll sz=s1.size(),flag=0,i;
    //ll sz2=s2.size();
    char ch1=char(a+'0');char ch2=char(b+'0');
    if(ch1>ch2) swap(ch1,ch2);
    string tt="";
    f(i,sz)
    {
         if(flag==1)
             tt+=min(ch1,ch2);
         else
         {
             if(ch1>=s1[i])
               {tt+=ch1;
                 if(ch1>s1[i]) flag=1;

               }
              else if(ch2>=s1[i])
                {
                    tt+=ch2;
              if(ch2>s1[i])
                flag=1;
              }

             else return "999999999999999999";

             cout<<tt<<" "<<flag<<endl;


         }
    }
    cout<<endl;
    return tt;
}
bool comp(string a,string b)
{
    ll sz=a.size();ll sz2=b.size();
      if(sz<sz2) return 1;
      if(sz==sz2) return a<b;
      return 0;
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
          string str=to_string(n);
          string ans="1";
            ll sz=str.size();
            f(i,sz) ans+="0";
            /* for(i=1;i<=9;i++)
             {
                 for(j=0;j<=9;j++)
                 {


                      ans=min(ans,func(str,i,j),comp);
                 }
             }*/

            ans=min(ans,func(str,1,0),comp);
           if(k==1)
           {    ans="1";
               f(i,sz)  ans+="1";
               f(i,10)
                ans=min(ans,func(str,i,i),comp);
                cout<<ans<<endl;

           }




      }








}
