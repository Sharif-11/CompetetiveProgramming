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
      {  string s1;
          cin>>s1;
          n=s1.size();
          ll idx1=-1,idx2=-1;
          for(i=0;i<n-1;i++)
          {
              u=int(s1[i])-'0';
              v=int(s1[i+1])-'0';
              if(u+v<10)
              {
                 if(idx1==-1)
                    idx1=i;
              }
              else
              {
                  idx2=i;
              }

          }
          string ans1="",ans2="";
           if(idx1!=-1)
           {
               ans1=s1.substr(0,idx1);
               u=int(s1[idx1])-'0';
               v=int(s1[idx1+1])-'0';

               ans1+=char(u+v+'0');
               ans1+=s1.substr(idx1+2,n-idx1-2);
           }
           if(idx2!=-1)
           {
               ans2=s1.substr(0,idx2);
               u=int(s1[idx2])-'0';
               v=int(s1[idx2+1])-'0';
               u=(u+v)%10;
            ans2+="1";
            ans2+=char(u+'0');
            ans2+=s1.substr(idx2+2,n-idx2-2);
           }
           if(ans2.size()>ans1.size()) cout<<ans2<<endl;
           else if(ans2.size()==ans1.size()) cout<<max(ans1,ans2)<<endl;
           else cout<<ans1<<endl;

      }








}





