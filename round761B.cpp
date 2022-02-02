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
ll arr[27]={0};
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          string s1,s2;
          cin>>s1>>s2;
          ll flag=0;
          mem(arr,0);
            ll sz=s1.size();
               f(i,sz)
               {
                   u=int(s1[i])-'a';
                   arr[u]++;
                   if(u>2) flag=1;
               }

               if(arr[0]==0||arr[1]==0||arr[2]==0||s2!="abc")
               {
                   sortt(s1);cout<<s1<<endl;
               }
               else
               {
                   f(i,arr[0]) cout<<"a";
                   f(i,arr[2]) cout<<"c";
                   f(i,arr[1]) cout<<"b";
                   for(i=3;i<26;i++)
                   {
                       f(j,arr[i]) cout<<char(i+'a');
                   }
                   cout<<endl;
               }
      }








}





