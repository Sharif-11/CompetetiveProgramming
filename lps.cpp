#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<ll> LPS(string patt)
{   ll m=patt.size();
    ll len=0;
    vector<ll>lps;
    lps.push_back(0);
    ll i=1;
    while(i<m)
    {
        if (patt[i] == patt[len])
        {
            len++;
           // lps[i] = len;
           lps.push_back(len);
            i++;
        }
        else
        {
            if(len!=0)
                len=lps[len-1];
            else

            {
                lps.push_back(0);
                i++;
            }
        }
    }
    return lps;
}
int main()
{
    string str;
    while(cin>>str)
    {
        vector<ll>lps=LPS(str);
        for(ll i=0;i<lps.size();i++)
            cout<<lps[i]<<" ";
        cout<<endl;
    }
}
