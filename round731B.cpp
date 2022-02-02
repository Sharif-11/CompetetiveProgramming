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
      cin>>tc;
      while(tc--)
      {
          set<char>st;
          string str;
          cin>>str;n=str.size();
          ll idx=-1,f1=0,f2=0;
          char ch='a';
          for(i=0;i<n;i++)
          {
              if(str[i]=='a') idx=i;
              st.insert(str[i]);
              ch=max(ch,str[i]);
          }
          u=int(ch)-'a';

          if(st.size()<n||idx==-1||(u+1)!=n) no;
          else
          {
              for(i=idx+1;i<n;i++)
              {
                  if(str[i]<str[i-1])
                    f1=1;
              }
              for(i=idx-1;i>=0;i--)
              {
                  if(str[i]<str[i+1])
                    f2=1;
              }
              tr(f1==0&&f2==0);

          }


      }








}




