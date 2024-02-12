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
            flag=2;
        if(y==n)
            flag=2;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    if(flag==0)
    {
        for(i=0 ; i<n-1 ; i++)
        {
            if(v[i]==v[i+1]-1)
            {
                flag++;
                if(flag==2)
                    break;
            }
        }
    }

    if(flag==2)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
