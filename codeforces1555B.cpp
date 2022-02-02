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
      cin>>tc;
      while(tc--)
      {
          ll w,h,x1,y1,x2,y2;
          cin>>w>>h;
          cin>>x1>>y1>>x2>>y2;
          cin>>x>>y;
          vector<double>vct;
          if(x1>=x||y1>=y)
            vct.pb(0);
          else {
            u=x-x1;v=y-y1;
            double r=sqrt(u*u+v*v);
            if(x2+u<=w) vct.pb(u);
            if(y2+v<=h) vct.pb(v);
            if(x2+u<=w&&y2+v<=h) vct.pb(r);
            else vct.pb(inf);
          }
          if(x1>=x||y1<=h-y) vct.pb(0);
          else
          {
              u=x-x1;v=y-h+y1;
              double r=sqrt(u*u+v*v);
              if(x2+u<=w) vct.pb(u);
              if(y1-v>=0) vct.pb(v);
              else if(x2+u<=w&&y1-v>=0) vct.pb(r);
              else vct.pb(inf);
          }


      }








}




