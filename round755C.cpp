//Bismillahir Rahmanir Rahim
//Shariful Islam(1804011)
//Chittagong University of Engineering & Technology
#include<bits/stdc++.h>
#define pb push_back
#define fin(i,arr,n) for(i=0;i<n;i++)cin>>arr[i]
#define fout(i,arr,n) for(i=0;i<n;i++)cout<<arr[i]<<" "
#define inf 9223372036854775807
#define vi vector<ll>
#define init ll m,a,i,b,j,t,x,y,z,tc,u,v,w
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
ll N,M;
/* Fenwick Tree
ll tree[200005],n;
ll read(ll idx){ll sum=0;while(idx>0){sum+=tree[idx];idx-=(idx&-idx);}return sum;}
void update(ll idx,ll val){while(idx<=n){tree[idx]+=val;idx+=(idx&-idx);}}
*/
ll arr[105],arr2[105];
bool bipartiteGraph[105][105];

bool bipartiteMatch(int u, bool visited[], int assign[]) {
   for (int v = 0; v < N; v++) {    //for all jobs 0 to N-1
      if (bipartiteGraph[u][v] && !visited[v]) {    //when job v is not visited and u is interested
         visited[v] = true;    //mark as job v is visited
         //when v is not assigned or previously assigned
         if (assign[v] < 0 || bipartiteMatch(assign[v], visited, assign)) {
            assign[v] = u;    //assign job v to applicant u
            return true;
         }
      }
   }
   return false;
}

int maxMatch() {
   int assign[N];    //an array to track which job is assigned to which applicant
   for(int i = 0; i<N; i++)
      assign[i] = -1;    //initially set all jobs are available
   int jobCount = 0;

   for (int u = 0; u < M; u++) {    //for all applicants
      bool visited[N];
      for(int i = 0; i<N; i++)
         visited[i] = false;    //initially no jobs are visited
      if (bipartiteMatch(u, visited, assign))    //when u get a job
         jobCount++;
   }
   return jobCount;
}
int main()
{   ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
      //freopen("read.txt","r",stdin);
      //freopen("write.txt","w",stdout);
      init;
      cin>>tc;
      while(tc--)
      {  ll n;
          cin>>n;
           N=M=n;

          fin(i,arr,n);fin(i,arr2,n);
          f(i,n)
          {
              f(j,n)
              {
                   if(arr[i]==arr2[j])
                   bipartiteGraph[i][j]=1;
                   else if(arr[i]+1==arr2[j])
                    bipartiteGraph[i][j]=1;
                 else  bipartiteGraph[i][j]=0;

              }
          }
          tr(maxMatch()==n);

      }








}





