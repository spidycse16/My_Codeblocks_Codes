#include<bits/stdc++.h>
using namespace std;
vector <int> G[100];
int visited[100];
queue <int> q;

int bfs(queue <int> q)
{
    int i,frnt;
    while(q.size())
    {
        frnt=q.front();
    q.pop();
    cout<<frnt<<endl;
    for(i=0 ; i<G[frnt].size() ; i++)
    {
        if(!visited[G[frnt][i]])
        {
            q.push(G[frnt][i]);
            visited[G[frnt][i]]=1;
        }
    }
    }
}

int main()
{
    int i,j,node,edge;
    cin>>node>>edge;
    for(i=0 ; i<edge*2 ; i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
    }
    for(i=0 ; i<node ; i++)
    {
        if(!visited[i])
        {
            q.push(i);
            visited[i]=1;
            bfs(q);
        }
    }
}
