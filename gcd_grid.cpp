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
unordered_map<ll,ll>mp;
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      ll arr[1005][1005]={0};
       cin>>n>>m;
       for(i=1;i<=m;i++)
        {arr[0][i-1]=2*i;mp[2*i]=1;}
       k=2*m;
       for(i=1;i<n;i++)
        {arr[i][0]=k+2*i;mp[k+2*i]=1;}
       f(i,n)
       {
           f(j,m)
           {
               if(i>0&&j>0)
               {
                   for(k=1;k<=1000;k++)
                   {
                       if( mp.find(arr[0][j]*arr[i][0]*k)==mp.end())
                       {
                           mp[ arr[0][j]*arr[i][0]*k]=1;
                           arr[i][j]= arr[0][j]*arr[i][0]*k;
                           break;
                       }
                   }


               }
           }
       }
       f(i,n)
       {
           f(j,m)
           cout<<arr[i][j]<<" ";
           cout<<endl;
       }








}




