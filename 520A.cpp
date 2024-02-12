#include<bits/stdc++.h>
using namespace std;
const int N = 3e4 + 10;
vector <int> G[N];
queue <int> q;
int visited [N];
int flag=0;
void bfs(int t)
{
    int i,j,fnt;
    q.push(t);
    visited[t]++;
    while(q.size())
    {
        fnt=q.front();
        q.pop();

        for(i=0 ; i<G[fnt].size() ; i++)
        {
            if(!visited[G[fnt][i]])
            {
                //cout<<G[fnt][i]<<endl;
                q.push(G[fnt][i]);
                visited[G[fnt][i]]=1;
            }

        }
    }
}

int main()
{
    int i,j,n,a,t;
    cin>>n>>t;
    for(i=1 ; i<n ; i++)
    {
        cin>>a;
        G[i].push_back(i+a);
    }


    bfs(1);

    /*for(int i =1; i <= n; i++){
        cout << visited[i] <<" ";
    }*/
    //cout <<endl;
    if(visited[t])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
