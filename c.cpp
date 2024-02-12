#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc,i,j,k;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        vector <int> v1;
        vector <int> v2;
        int x,ans,res;
        cin>>k;
        for(j=0 ; j<k ; j++)
        {
            cin>>x;
            v1.push_back(x);
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
        for(j=0 ; j<k ; j++)
        {
            if(v2[j]==v1[v1.size()-1])
            {
                cout<<v2[j]-v1[v1.size()-2]<<" ";
            }
            else
                cout<<v2[j]-v1[v1.size()-1]<<" ";
        }
        cout<<endl;
    }
}

