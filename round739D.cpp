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
    ll sz=s1.size();
    ll sz2=s2.size();
    ll i,k=0;
    f(i,sz)
    {
        if(s1[i]==s2[k])
        {
            k++;
            if(k==sz2) break;

        }
    }
  //  cout<<s2.substr(0,k)<<endl;
    return (sz-k+(sz2-k));

}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      vector<string>vct;
      for(i=0;i<=60;i++)
      {
          if(i==0) k=1;
          else k*=2;
          vct.pb(to_string(k));
      }
      while(tc--)
      {
          string str;
          cin>>str;
          ll ans=inf;
          for(i=0;i<=60;i++)
          {
              string s1=vct[i];

              u=func(str,s1);
              ans=min(u,ans);

          }
         cout<<ans<<endl;
      }








}




