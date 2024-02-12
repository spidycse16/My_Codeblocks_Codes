#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,n;
    vector <int> v;
    cin>>n>>x;
    int y,flag=0;
    for(i=0 ; i<x ; i++)
    {
        cin>>y;
        if(y==1)
            flag=1;
        if(y==n)
            flag=1;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    for(i=0 ; i<x-2 ; i++)
    {
        if(v[i]==v[i+1]-1 && v[i+1]==v[i+2]-1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
