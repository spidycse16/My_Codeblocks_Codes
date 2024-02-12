#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc,i,j,k;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        vector <int> v;
        for(j=0 ; j<3 ; j++)
        {
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
}
