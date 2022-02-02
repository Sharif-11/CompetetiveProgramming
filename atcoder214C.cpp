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
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
       ll arr1[20005],arr2[20005],ans[20005],ans2[20005];
       cin>>n;
       fin(i,arr1,n);fin(i,arr2,n);
       ll mn=inf,idx;
       f(i,n)
       {
           if(arr2[i]<mn)
           {
               mn=arr2[i];
               idx=i;
           }
       }
       for(i=idx;i<n;i++)
       {
           if(i==idx)
              ans[i]=arr2[i];
           else
            ans[i]=min(ans[i-1]+arr1[i-1],arr2[i]);
       }
       for(i=0;i<idx;i++)
       {
           if(i==0)
              ans[i]=min(arr2[i],ans[n-1]+arr1[n-1]);
           else
              ans[i]=min(ans[i-1]+arr1[i-1],arr2[i]);
       }
       fout(i,ans,n);cout<<endl;









}
