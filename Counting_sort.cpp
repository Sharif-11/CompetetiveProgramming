#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i,j,n,u,arr[20005],cnt[20005]={0},arr2[20005];
     cout<<"Enter the number of Elements in the array(must be less than 20000): ";
     cin>>n;
     cout<<"Enter the elements of the array(must be less than 20000):"<<endl;
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
         cnt[arr[i]]++;
     }
     for(i=1;i<20000;i++) cnt[i]=cnt[i-1]+cnt[i];
     for(i=n-1;i>=0;i--)
     {
         u=arr[i];
         arr2[cnt[u]-1]=arr[i];
         cnt[u]--;

     }
     for(i=0;i<n;i++) arr[i]=arr2[i];
     cout<<"The sorted  array is:"<<endl;
     for(i=0;i<n;i++) cout<<arr[i]<<" ";
     cout<<endl;

}
