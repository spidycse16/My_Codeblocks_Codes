#include<bits/stdc++.h>
using namespace std;
vector <int> G[100];
queue <int> q;
int visited[10]={0};

 int bfs(queue <int> q)
    {
        int j,p;
        while(q.size())
        {
            int p=q.front();
            q.pop();
            cout<<p<<endl;
            for(j=0 ; j<G[p].size() ; j++)
            {
                if(!visited[G[p][j]])
                {
                    q.push(G[p][j]);
                    visited[G[p][j]]=1;
                }
            }
        }
    }

int main()
{
    int i,j,x,y,edge;
    cin>>edge;
    for(i=0 ; i<edge*2 ; i++)
    {
        cin>>x>>y;
        G[x].push_back(y);
    }
    for(i=0 ; i<edge+1 ; i++)
    {
        if(!visited[i])
        {
            q.push(i);
            visited[i]=1;
            bfs(q);
        }
    }

}
