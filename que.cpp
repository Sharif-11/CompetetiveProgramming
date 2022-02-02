#include<bits/stdc++.h>
using namespace std;
int main()
{
      queue<int>qu;
      while(1)
      {
          int k,c;
        cout<<"Enter Choice: ";cin>>c;
        if(c==1)
        {
            cin>>k;
            qu.push(k);

        }
        else if(c==-1)
            qu.pop();
        else cout<<qu.front()<<endl;

      }








}




