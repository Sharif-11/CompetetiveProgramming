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
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      char ch;
         string tt,demo,str,ans;
         getline(cin,tt);
         stringstream iss(tt);
         iss>>tc;
         while(tc--)
         {
             getline(cin,demo);
             str="0";
             ans="";
             stack<string>stk;
             stk.push("(");
             while(str!="")
             {
                 getline(cin,str);
                 if(str=="(")
                    stk.push(str);
                 else if(str==")")
                 {
                     while(1)
                     {
                         string uu=stk.top();
                         if(uu=="("){stk.pop();break;}
                         ans+=uu;
                         stk.pop();

                     }
                 }
                 else if(str>="0"&&str<="9")
                    ans+=str;
                 else if(str=="*"||str=="/")
                 {
                     while(1)
                     {
                         string uu=stk.top();
                         if(uu=="("||uu=="-"||uu=="+") break;
                         ans+=uu;
                         stk.pop();
                     }
                     stk.push(str);
                 }
                 else if(str=="+"||str=="-")
                 {
                     while(1)
                     {
                         string uu=stk.top();
                         if(uu=="(") break;
                         ans+=uu;
                         stk.pop();
                     }
                     stk.push(str);
                 }

             }
             while(stk.size()>1)
             {
                 ans+=stk.top();
                 stk.pop();
             }
             cout<<ans<<endl<<endl;
         }








}




