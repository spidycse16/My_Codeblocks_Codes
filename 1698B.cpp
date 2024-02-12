#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,x,y=0,n,j,i,k;
    cin>>tc;
    for(j=0 ; j<tc ; j++)
    {
        int cnt=0;
        vector <int> v;
        cin>>n>>k;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(i=1 ; i<v.size()-1 ; i++)
        {
            if(v[i]>v[i-1]+v[i+1])
                cnt++;
        }
        if(k==1)
            cout<<(n-1)/2<<endl;
        else
            cout<<cnt<<endl;
    }
}


