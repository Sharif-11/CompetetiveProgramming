#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    ll i,n,u;
    stack<ll>stk;
    cout<<"Enter the expression to evaluate:"<<endl;
    cin>>str;
    n=str.size();
    for(i=0;i<n;i++)
    {     u=int(str[i])-'0';
         if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
         {
            int b=stk.top();stk.pop();
            int a=stk.top();stk.pop();
            if(str[i]=='+')
                stk.push(a+b);
            else if(str[i]=='-')
                stk.push(a-b);
            else  if(str[i]=='*')
                stk.push(a*b);
            else
                stk.push(a/b);


         }
         else stk.push(u);
    }
    u=stk.top();
    cout<<"Evaluation of expression is: ";
        cout<<u<<endl;
}
