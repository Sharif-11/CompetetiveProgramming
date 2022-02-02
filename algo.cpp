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
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          string str;
          ll sz,mod=0;double tt,dbl;
          cin>>str;
          tt=stod(str);
          sz=str.size();
          f(i,sz)
          {
              u=int(str[i])-'0';
              mod=(mod*10+u)%7;
          }
          //cout<<fixed<<setprecision(4)<<(tt-mod)/7<<endl;
          dbl=2*(tt-mod)/7+tt;
          if(mod>=5) dbl+=2;
          else if(mod>=4) dbl++;
         // cout<<mod<<endl;
          cout<<fixed<<setprecision(0)<<dbl<<endl;

      }








}




