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
ll arr[200005],sum[100005],mn[200005],n,ttl[100005];
ll binary(ll idx)
{
    ll lo=idx,hi=n-1;
    ll mid=(lo+hi)/2;
    ll ans=n-1;
    while(lo<=hi)
    {
        if(mid==n-1)
        {
            ans=n-1;
            hi=mid-1;

        }
        else if(mn[mid+1]>=arr[idx])
        {
            ans=mid;
            hi=mid-1;
        }
        else lo=mid+1;
        mid=(lo+hi)/2;
    }
    return ans;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {   mem(sum,0);
          map<ll,ll>mp;
          cin>>n;
          fin(i,arr,n);
          for(i=n-1;i>=0;i--)
          {
              if(i==n-1) mn[i]=arr[i];
              else mn[i]=min(arr[i],mn[i+1]);

          }
          f(i,n)
          {   v=binary(i);
              u=v-i;

              sum[i]+=u;
              sum[i+1]-=u;
              sum[i+1]++;
              sum[v+1]--;

          }
          f(i,n)
          {
               if(i==0) ttl[i]=sum[i];
               else ttl[i]=ttl[i-1]+sum[i];
          }
        //  f(i,n) cout<<binary(i)-i<<" ";cout<<endl;
         // f(i,n) cout<<ttl[i]<<" ";cout<<endl;
          f(i,n)
          {
              u=arr[i];
              v=(ttl[i]%2);
              if(v==1)
              {
                  if(mp.find(u)==mp.end()) mp[u]=1;
                  else mp[u]++;
              }

          }
          ll flag=0;
          sitr(itr,mp)
          {
              u=itr->second;
              if(u%2==1)
                flag=1;

          }
          tr(flag==0);


      }








}



