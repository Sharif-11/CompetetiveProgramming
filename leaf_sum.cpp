#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      ll u,i,n,v,w,sum=0;
      cin>>n;
      for(i=0;i<n;i++)
      {
          cin>>u>>v>>w;
          if(u==0&&v==0)
            sum+=w;
      }
      cout<<sum<<endl;
}
