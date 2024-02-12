#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,tc,x;
    cin>>tc;
    for(int k=0 ; k<tc; k++)
    {
        vector <int> v;
        long long int cost=0;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(i=1 ; i<v.size() ; i++)
        {
            cost=cost+(v[i]-v[0]);
        }
        cout<<cost<<endl;
    }
}
