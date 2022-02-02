#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll visit[30]={0};

struct num
{
    ll p,d;
};
bool operator<(num x,num y)
{
    if(x.d>y.d) return 1;
    if(x.d==y.d) return x.p>y.p;
    return 0;
}
vector<num>vct;
int main()
{
    ll tc,i,n,p,d,sum=0,visit[250]={0},vis2[35]={0};
    cin>>n;
    vector<num>vct;
    for(i=0;i<n;i++)
    {
        cin>>p>>d;
        vct.push_back({p,d});
    }
    sort(vct.begin(),vct.end());
   // for(i=0;i<n;i++) cout<<vct[i].p<<" "<<vct[i].d<<endl;
    for(i=30;i>=1;i--)
    {      ll mx=0,idx=-1;
        for(ll j=0;j<n;j++)
        {
            if(vct[j].d>=i&&visit[j]==0)
            {
                if(mx<vct[j].p)
                {
                    mx=vct[j].p;
                    idx=j;
                }

            }
        }
        if(idx>=0)  {sum+=mx;visit[idx]=1;}
    }
    cout<<sum<<endl;

}
