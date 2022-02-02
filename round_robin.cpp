#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      ll i,n,arr[200005],cnt=0,sz,u,v,t,flag=0;
      queue<ll>Q;
      cout<<"Enter the number of process: ";cin>>n;
      cout<<"Enter time required for each process: ";cin>>u;
      cout<<"Enter the time to be shared equally: ";cin>>t;
        for(i=0;i<n;i++) Q.push(u);
      while(1)
      {

         while(!Q.empty())
         {
             u=Q.front();Q.pop();
             if(u>=t)
              u-=t;
              else {u=0;flag=1;}
              cout<<u<<" ";


         }
         cnt+=n;
         cout<<endl;
         if(flag==1) break;
         for(i=0;i<n;i++) Q.push(u);


    }
    cout<<"Time required for completing all task is: ";
    cout<<cnt<<endl;

}
