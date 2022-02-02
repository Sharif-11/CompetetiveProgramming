#include<bits/stdc++.h>
#define init ll n,m,a,i,b,j,k,t,x,y,z,tc,u,v,w
using namespace std;
typedef long long ll;
int main()
{
      init;
       cin>>n;
       int arr[505];
       for(i=0;i<n;i++) cin>>arr[i];
       for(i=0;i<n;i++)
       {
           for(j=0;j<n-1;j++)
           {
               if(arr[j]>arr[j+1])
               {
                   t=arr[j];
                   arr[j]=arr[j+1];
                   arr[j+1]=t;
               }
           }
       }
       for(i=0;i<n;i++) cout<<arr[i]<<" ";
       cout<<endl;

}




