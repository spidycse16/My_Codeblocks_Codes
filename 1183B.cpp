#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x,y,n,i,j,k;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        cin>>n>>k;
        vector <int> v;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            x=x+k;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(abs(v[v.size()-1]-v[0]>k))
            cout<<"-1"<<endl;
        else
            cout<<v[0]<<endl;
    }

}

