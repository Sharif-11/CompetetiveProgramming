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
ll arr[1005],n;
bool sorted()
{
    for(ll i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i]) return 0;
    }
    return 1;
}

void func(ll k)
{   ll i;
    if(k%2==0)
    {
        for(i=0;i<n;i+=2)
            {
                if(arr[i]>arr[i+1]&&arr[i]&&arr[i+1])
                    swap(arr[i],arr[i+1]);
            }
    }
    else
    {
        for(i=1;i<n;i+=2)
        {
                            if(arr[i]>arr[i+1]&&arr[i]&&arr[i+1])
                    swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {
          cin>>n;
          fin(i,arr,n);
          if(sorted()) cout<<0<<endl;
          else
          {
              f(i,n*n)
              {
                  func(i);
                 // fout(j,arr,n);
                 // cout<<endl;
                  if(sorted())
                  {cout<<i+1<<endl;break;}

              }
          }
      }








}




