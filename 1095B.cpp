#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,n,mx=0,cnt=0;
    cin>>n;
    vector <int> v;
    vector <int> v1;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(n==2)
        cout<<"0"<<endl;
    else
    {
        v1.push_back(abs(v[1]-v[v.size()-1]));
        v1.push_back(abs(v[0]-v[v.size()-1]));
        v1.push_back(abs(v[0]-v[v.size()-2]));
        sort(v1.begin(),v1.end());
        cout<<v1[0]<<endl;
    }
}


