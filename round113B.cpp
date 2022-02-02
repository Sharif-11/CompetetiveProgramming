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
          string str;
          cin>>n>>str;
          vector<ll>vct;
          f(i,n)
          {
              if(str[i]=='2') vct.pb(i);
          }
          ll sz=vct.size();
          if(sz==1||sz==2)
            no;
          else
          {
             // yes;
              char ch[55][55];
              f(i,n){ f(j,n) ch[i][j]='0';}
              if(sz>2){
              f(i,sz-1)
              {
                  u=vct[i];v=vct[i+1];
                  ch[u][v]='+';
                  ch[v][u]='-';
              }
              u=vct[sz-1];v=vct[0];
              ch[u][v]='+';ch[v][u]='-';
              }
              yes;
              f(i,n)
              {
                  f(j,n)
                  {
                      if(i==j) cout<<"X";
                      else if(ch[i][j]!='0') cout<<ch[i][j];
                      else if(str[i]=='1'&&str[j]=='1') cout<<"=";
                      else if(str[i]=='1'&&str[j]=='2') cout<<"+";
                      else if(str[i]=='2'&&str[j]=='1') cout<<"-";
                       else if(ch[i][j]=='0')
                       {
                           ch[i][j]='+';
                           cout<<"+";
                           ch[j][i]='-';
                       }



                  }
                  cout<<endl;
              }
          }
      }








}



