#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,tc;
    vector <int> v;
    cin>>tc;
    for(i=0  ; i<tc ; i++)
    {
        long long int x,y,z,m,ans=0;
        cin>>n;
        for(j=1 ; j<n ; j+=2)
        {
            v.push_back(j);

        }
        for(j=n ; j>=2 ; j-=2)
        {
            v.push_back(j);

        }
        for(j=0 ; j<n ; j++)
            cout<<v[j]<<" ";
        cout<<endl;
        v.clear();

    }
    return 0;

}







