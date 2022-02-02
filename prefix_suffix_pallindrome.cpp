//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,a,i,b,j,k,t,x,y,z,tc,u,v,w
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
string str;
ll n;
vector<ll> LPS(string patt)
{   ll m=patt.size();
    ll len=0;
    vector<ll>lps;
    lps.push_back(0);
    ll i=1;
    while(i<m)
    {
        if (patt[i] == patt[len])
        {
            len++;
           // lps[i] = len;
           lps.push_back(len);
            i++;
        }
        else
        {
            if(len!=0)
                len=lps[len-1];
            else

            {
                lps.push_back(0);
                i++;
            }
        }
    }
    return lps;
}
string func(string s1)
{
    ll i,sz=s1.size();
    string tt=s1;
    reverse(tt.begin(),tt.end());
    string s2=s1+"#"+tt;
    string s3=tt+"#"+s1;
    vector<ll>lps1=LPS(s2);
    vector<ll>lps2=LPS(s3);
    ll u=lps1[2*sz];
    ll v=lps2[2*sz];
    if(u>=v)
        return s1.substr(0,u);
    else return s1.substr(sz-v,v);
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>str;
          n=str.size();
          ll idx=-1;
         for(i=0;i<n/2;i++)
         {
             if(str[i]==str[n-i-1])
                idx=i;
             else break;
         }
         if(idx==-1)
         cout<<func(str)<<endl;
         else
         {
             string ans=str.substr(0,idx+1);
             string tt=ans;
             reverse(tt.begin(),tt.end());
             ans+=func(str.substr(idx+1,n-2*(idx+1)));
             cout<<ans+tt<<endl;
         }


      }










}





