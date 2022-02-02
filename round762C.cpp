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
ll func(string s1,string s2)
{   string ans="";
    ll i,u,v,n=s1.size(),m=s2.size();

    if(m<n) return -1;

    ll k=m-n;
    while(k--) s1="0"+s1;
   // cout<<s1<<" "<<s2<<endl;
    n=s1.size();m=s1.size();
    ll r=m-1;
    for(i=m-1;i>=0;i--)
    {
        u=int(s2[i])-'0';
        v=int(s1[r])-'0';
       // cout<<u<<" "<<v<<endl;
        if(u>=v)
        {
            ans=char(u-v+'0')+ans;
            r--;
        }
        else
        {
            if(i-1>=0)
            {
                ll k=int(s2[i-1])-'0';
                u=10*k+u;
                if(u-v>9) return -1;
                else
                {
                    ans=char(u-v+'0')+ans;
                    i--;
                    r--;
                }
            }
            else return -1;
        }
    }
  //  cout<<ans<<endl;
     if(r<0){
    stringstream iss(ans);
      iss>>u;
      return u;
     }
     else
     {

       string tt=s1.substr(0,r+1);
       stringstream iss(tt);
       iss>>v;
       if(v>0) return -1;
       else
       {
             stringstream iss(ans);
      iss>>u;
      return u;
       }
     }

    return -1;

}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          ll flag=0;
          string s1,s2,ans="";
         ll aa,bb;
         cin>>s1>>s2;
         cout<<func(s1,s2)<<endl;







      }








}





