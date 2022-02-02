//Bismillahir Rahmanir Rahim
//Kawsar Ahmed
//==================================================================================================================================================
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
#define  gc                         getchar_unlocked
#define  si(x)	                    scanf("%d",&x)
#define  sl(x)	                    scanf("%lld",&x)
#define  ss(s)	                    scanf("%s",s)
#define  pi(x)	                    printf("%d\n",x)
#define  pl(x)	                    printf("%lld\n",x)
#define  ps(s)	                    printf("%s\n",s)
#define  deb(x)                     cout << #x << "=" << x << endl
#define  deb2(x, y)                 cout << #x << "=" << x << "," << #y << "=" << y << endl
#define  cins(str)                  getline(cin,str,'\n')
#define  pb                         push_back
#define  mp                         make_pair
#define  mem(arr,x)                 memset(arr,x,sizeof(arr))
#define  sorting(vec)               sort(vec.begin(),vec.end())
#define  Max(vec)                   *max_element(vec.begin(),vec.end())
#define  gcd(a,b)                   __gcd(a,b)
#define  PI                         3.1415926535897932384626
typedef  pair<int, int>	ii;
typedef  pair<ll, ll>	pl;
typedef  vector<int>	vi;
typedef  vector<ll>	    vl;
typedef  vector<ii>	    vii;
typedef  vector<pl>	    vpl;
typedef  vector<vi> 	vvi;
typedef  vector<vl>	    vvl;
typedef  vector<vii>                AdjList;
typedef  vector<pair<int, ii> >     EdgeList;
const int mod = 1'000'000'007;
//==================================================================================================================================================
//-------------------------------------------------------------TAMPLATE-----------------------------------------------------------------------------
//==================================================================================================================================================
//Caution:Always declare global array
//Local array cause fatal error
int spf[20000005]={0};
void primeFactor(int n){

    for(int i=2;i<=n;i++){
        spf[i]=i;
    }

    for(int i=2;i<=n;i++){
        if(spf[i]==i){
            for(int j=i;j<=n;j+=i){
                if(spf[j]==j){
                    spf[j]=min(spf[j],i);
                }
            }
        }
    }
   // for(int i=2;i<=n;i++) cout<<i<<" "<<spf[i]<<endl;

   /*  May be this portion create error
   while(n!=1){
        ans.pb(spf[n]);
        n=n/spf[n];
    }

    int ln =ans.size();
    int mx = Max(ans);
    vi count(mx+1,0);
    for(int i=0;i<ln;i++){
        count[ans[i]]++;
    }

    int i=2;
    for(i=2;i<mx;i++){
        if(count[i]!=0) cout<<"("<<i<<"^"<<count[i]<<")*";
    }
    cout<<"("<<i<<"^"<<count[i]<<")"<<endl;*/
    //My solution describe below
    map<int,int>mp;
    while(n>1)
    {
        int u=spf[n];
        if(mp.find(u)==mp.end()) mp[u]=1;
        else mp[u]++;
        n/=u;
    }
    for(auto itr=mp.begin();itr!=mp.end();itr++)
    {


         auto it=itr; it++;
         if(it==mp.end())
            cout<<"("<<(itr->first)<<"^"<<(itr->second)<<")"<<endl;
         else
         cout<<"("<<(itr->first)<<"^"<<(itr->second)<<")*";



    }


}

int solve(){
    int n;
    cin>>n;
    primeFactor(n);
}

int main(){
    //cin.tie(0)->sync_with_stdio(0);
    //cin.exceptions(cin.failbit);
    int tc=1;
    //cin>>tc;
    while(tc--) solve();
}
