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
ll func(string s1,string s2)
{
    ll sz=s1.size(),sz2=s2.size(),i;
    ll k=0;
    f(i,sz)
    {
        if(s1[i]==s2[k])
        {
            k++;
            if(k==sz2)
                return 1;
        }
    }
    return 0;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      vector<string>vct;
      vct.pb("1");
      for(i=2;i<=1000;i++)
      {  ll flag=0;
          for(j=2;j*j<=i;j++)
          {
              if(i%j==0)
                flag=1;
          }
          if(flag==1)
           vct.pb(to_string(i));
      }

      string str;
      cin>>tc;
      while(tc--)
      {
          cin>>n>>str;
          ll sz=vct.size();
          f(i,sz)
          {
              if(func(str,vct[i]))
              {
                  cout<<vct[i].size()<<endl<<vct[i]<<endl;
                  break;
              }
          }
      }








}




