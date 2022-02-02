#include<bits/stdc++.h>
#define  pr pair<ll,ll>
using namespace std;
typedef long long ll;

ll dr[]={0,0,-1,1};
ll dc[]={-1,1,0,0};
ll visit[250][250]={0},n,m,X[250],Y[250];
char ch[250][250];
pr parent[250][250];
ll applex,appley,headx,heady;
bool valid(ll r,ll c)
{
    return (r>=0&&c>=0&&r<n&&c<m);
}
char bfs(ll r,ll c)
{   ll flag=0;
       queue<pr>Q; pr p1;
       visit[r][c]=1;
       Q.push({r,c});
       while(!Q.empty())
       {   if(flag==1) break;
           p1=Q.front();Q.pop();
           for(ll i=0;i<4;i++)
           {
                ll u=p1.first+dr[i],v=p1.second+dc[i];
                if(valid(u,v))
                {
                    if(visit[u][v]==0)
                    {
                        visit[u][v]=1;
                        parent[u][v]={p1.first,p1.second};
                        Q.push({u,v});
                        //cout<<u<<" "<<v<<endl;
                        if(u==applex&&v==appley)
                        {
                            flag=1;break;
                        }


                    }
                }

           }
       }
       if(flag==0) return 'R';
      pr p2={applex,appley};
       while(1)
       {    cout<<p2.first<<" "<<p2.second<<endl;
            p1=parent[p2.first][p2.second];
            if(p1.first==headx&&p1.second==heady)
            break;
            p2=p1;


       }
       if(p1.first==p2.first)
       {
           if(p2.second<p1.second) return 'L';
           else return 'R';
       }
       else if(p1.second==p2.second)
       {
           if(p2.first<p1.first) return 'U';
           else return 'D';
       }
       return 'R';

}
int main()
{   ll i,j;
      cin>>n>>m;
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {cin>>ch[i][j];
            visit[i][j]=(ch[i][j]=='*');
            if(ch[i][j]=='#')
          {
              applex=i;appley=j;
          }
      }
      }

       cin>>headx>>heady;
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
            cout<<visit[i][j];
           cout<<endl;
       }
      cout<<bfs(headx,heady)<<endl;

}

