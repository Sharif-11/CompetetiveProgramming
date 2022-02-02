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
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
string func(string s1,string s2,char ch)
{
    ll i,j,sz=s1.size(),u=sz/2,l=0,r=0;string ans="";
     for(i=0;i<sz;i++)
     {
         if(s1[i]!=ch) ans+=s1[i];
         else
         {
             while(r<sz)
             {
                 ans+=s2[r];
                 if(s2[r]==ch)
                 {
                     r++;
                     break;
                 }
                 else r++;
             }
         }
     }
     for(i=r;i<sz;i++) ans+=s2[i];
    return ans;
    return "-1";
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      string s1[5];
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          fin(i,s1,3);
          string ans;
          for(i=0;i<3;i++)
          {
              for(j=i+1;j<3;j++)
              {
                  ll c1=0,c2=0,c3=0,c4=0;
                  f(k,2*n)
                  {
                      c1+=(s1[i][k]=='0');c2+=(s1[i][k]=='1');
                      c3+=(s1[j][k]=='0');c4+=(s1[j][k]=='1');
                  }
                  if(c1>=n&&c3>=n)
                  {
                      if(c1>c3) swap(s1[i],s1[j]);
                      ans=func(s1[i],s1[j],'0');
                      //cout<<"--"<<ans<<endl;
                  }
                  if(c2>=n&&c4>=n)
                  {
                      if(c2>c4) swap(s1[i],s1[j]);
                      ans=func(s1[i],s1[j],'1');
                      //cout<<"--"<<ans<<endl;
                  }
              }
          }
          cout<<ans<<endl;
      }








}




