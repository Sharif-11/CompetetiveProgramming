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
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {  ll flag=-1,idx=-1;
          string s1,ans="";
          char ch;
          cin>>s1>>ch;  n=s1.size();
          if(ch=='9')
          {
             f(i,n)
             {
                 if(s1[i]=='9')
                 {
                     idx=i;
                     break;
                 }
             }
             if(idx==-1) ans=s1;
             else
             {
                 for(i=idx-1;i>=0;i--)
                 {
                     if(s1[i]<'8')
                     {
                        flag=i;break;
                     }
                 }
                 if(flag==-1)
                 {
                     ans="1";
                     while(n--) ans+="0";
                 }
                 else
                 {
                     f(i,flag) ans+=s1[i];
                     u=(int(s1[flag])+1);
                     ans+=char(u);
                     for(i=flag+1;i<n;i++) ans+="0";
                 }
             }
          }
          else
          {
              flag=0;
              f(i,n)
              {
                  if(s1[i]==ch)
                  {
                      flag=1;
                      idx=i;break;

                  }
              }
              if(flag==0) ans=s1;
              else {
              f(i,idx) ans+=s1[i];
              ans+=char(int(s1[idx])+1);
              for(i=idx+1;i<n;i++)
              {
                if(ch=='0') ans+="1";
                else ans+="0";
              }
              }
          }
          stringstream iss(s1);
          iss>>u;
          stringstream is(ans);
          is>>v;
          cout<<v-u<<endl;
      }








}





