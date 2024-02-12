#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    vector <vector<int>> v;
    fort(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            int x;
            cin>>x;
            v[i][j]=x;
        }
    }
