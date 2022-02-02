#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,n,sz,u;
    string str,expr,postfix="";
    stack<char>stk;
    cout<<"Enter the expression to evaluate: ";
    cin>>str;
    str="("+str+")";
    //Converting from infix to postfix
    n=str.size();
    for(i=0;i<n;i++)
    {
         if(str[i]=='(') stk.push(str[i]);
         else if(str[i]==')')
         {
             while(1)
             {
                 char ch=stk.top();
                 stk.pop();
                 if(ch=='(') break;
                 postfix+=ch;
            }
         }
         else if(str[i]>='0'&&str[i]<='9')
            postfix+=str[i];
         else if(str[i]=='+'||str[i]=='-')
         {
             while(1)
             {
                 char ch=stk.top();
                 if(ch=='(') break;
                 stk.pop();
                 postfix+=ch;
             }
             stk.push(str[i]);
         }
         else if(str[i]=='*'||str[i]=='/')
         {
             while(1)
             {
                 char ch=stk.top();
                 if(ch=='('||ch=='+'||ch=='-') break;
                 stk.pop();
                 postfix+=ch;
             }
             stk.push(str[i]);
         }
    }


    //Evaluation of infix
    stack<int>st;
      sz=postfix.size();
      for(i=0;i<sz;i++)
      {
          u=int(postfix[i])-'0';
          if(u>=0&&u<=9)
             st.push(u);
          else
          {
                  int b=st.top();
                  st.pop();
                  int a=st.top();
                  st.pop();
                  if(postfix[i]=='+')
                    st.push(a+b);
                  else if(postfix[i]=='-')
                    st.push(a-b);
                  else if(postfix[i]=='*')
                    st.push(a*b);
                  else
                    st.push(a/b);
          }
      }
      u=st.top();
      cout<<"The ans is: ";
      cout<<u<<endl;

}
