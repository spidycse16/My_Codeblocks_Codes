#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,x,y,n,i,j,a,b;
    a=0;
    b=0;
    long long int m,z,ans=0;
    vector <long long int> v;
    cin>>n;
    for(j=0 ; j<n ; j++)
    {
        cin>>z;
        v.push_back(z);
    }
    sort(v.begin(),v.end());
    if(n%2==0)
    {
        x=v.size()/2;
        for(j=0 ; j<n ; j++)
        {
            if(j<x)
                a=a+v[j];
            else
                b=b+v[j];
        }
    }

    else
    {
        x=n/2;
        for(j=0 ; j<n ; j++)
        {
            if(j>=x)
                b=b+v[j];
            else
                a=a+v[j];
        }
    }

    cout<<(b*b)+(a*a)<<endl;

}

