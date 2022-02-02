#include<bits/stdc++.h>
using namespace std;
int pre(char c)
{
    if(c=='*'||c=='/')return 2; return 1;
}
main()
{
    stack<char>st;
    string x;
    cin>>x;
    string y;
    st.push('(');
   //x.push_back(')');
    int i=0;
    while(!st.empty())
    {
        char c=x[i++];
        if(c>='0'&&c<='9') y=y+c;
        else if(c=='(') st.push(c);
      else  if(c=='+'||c=='-'||c=='*'||c=='/')
        {
            while(!st.empty()&&pre(st.top())>=pre(c)&&st.top()!='(')
            {
                y+=st.top();st.pop();
            }
            st.push(c);
        }
        else
        {
             while(!st.empty()&&st.top()!='(')
            {
                y+=st.top();st.pop();
            }

        if(st.top()=='(') st.pop();
        }
        cout<<y<<endl;
    }
}
