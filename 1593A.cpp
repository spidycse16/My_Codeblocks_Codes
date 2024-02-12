#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,x;
    vector<long long int> v;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int a,b,c;


        cin>>a>>b>>c;
        long long int m=max({a,b,c});
        if(m==0)
        {
            cout<<"1 "<<"1 "<<"1 "<<endl;
            continue;
        }
        if(a==m)
            cout<<"0 ";
        else
            cout<<m-a+1<<" ";
        if(b==m)
            cout<<"0 ";
        else
            cout<<m-b+1<<" ";
            if(c==m)
            cout<<"0 ";
        else
            cout<<m-c+1<<" ";
            cout<<endl;
    }
}
