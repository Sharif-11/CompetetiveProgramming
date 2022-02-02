#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct num
{
    ll deadline,profit;
};
bool operator<(num x,num y)
{
    if(x.deadline>y.deadline)
        return 1;
    if(x.deadline==y.deadline)
        return x.profit>y.profit;
    return 0;

}
int main()
{      vector<num>vct;
       ll i,n,p,d,sum=0;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>p>>d;
           vct.push_back({d,p});
       }
       sort(vct.begin(),vct.end());
       ll visit[35]={0};
       for(i=0;i<n;i++)
       {     ll u=vct[i].deadline;
            if(visit[u]==0)
            {
                visit[u]=1;
                sum+=vct[i].profit;
            }
       }
       cout<<sum<<endl;


}
