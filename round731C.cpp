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
      {     vi ans;
            queue<ll>q1,q2;
            cin>>k>>n>>m;
            f(i,n) {cin>>u;q1.push(u);}
            f(i,m) {cin>>u;q2.push(u);}
            ll flag=0;
            while(1)
            {
                if(q1.size()==0||q2.size()==0)
                    break;
                u=q1.front();v=q2.front();
                if(u==0)
                {
                    ans.pb(u);q1.pop();
                    k++;
                }
                else if(u<=k)
                {
                    ans.pb(u);q1.pop();
                }
                else if(v==0)
                {
                    ans.pb(v);q2.pop();k++;
                }
                else if(v<=k)
                {
                    ans.pb(v);q2.pop();
                }
                else {flag=1;break;}
            }
            if(q1.size()>0)
            {
                while(!q1.empty())
                {
                    u=q1.front();
                    if(u==0)
                    {
                        ans.pb(u);k++;q1.pop();
                    }
                    else if(u<=k)
                    {
                        ans.pb(u);q1.pop();
                    }
                    else {flag=1;break;}
                }
            }
            else   if(q2.size()>0)
            {
                while(!q2.empty())
                {
                    u=q2.front();
                    if(u==0)
                    {
                        ans.pb(u);k++;q2.pop();
                    }
                    else if(u<=k)
                    {
                        ans.pb(u);q2.pop();
                    }
                    else {flag=1;break;}
                }
            }
            if(flag) cout<<-1<<endl;
            else
            {
                fout(i,ans,n+m);cout<<endl;
            }

      }








}




