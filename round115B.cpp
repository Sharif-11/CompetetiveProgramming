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
struct node
{
    ll arr[5],idx;
}num[200005];
bool operator<(node a,node b)
{
    ll cnt=0,i;
    f(i,5)
    {
        cnt+=(a.arr[i]<b.arr[i]);
    }
    return cnt>=3;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {   cin>>n;
          f(i,n)
          {
              f(j,5)
              {
                  cin>>u;
                  num[i].arr[j]=u;
                  num[i].idx=i+1;
              }
          }
        sort(num,num+n);
        if(n==1)
            cout<<1<<endl;
         else
        {
            ll flag=0;
            for(i=1;i<n;i++)
            {
                if(num[0]<num[i])
                    flag=0;
                else
                {
                    flag=1;break;
                }
            }
            if(flag==0)
                cout<<num[0].idx<<endl;
            else cout<<-1<<endl;
        }





      }








}




