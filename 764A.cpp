#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,n,in;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int max=-1,min=10000000000;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>in;
            if(in>max)
                max=in;
            if(in<min)
                min=in;
        }
     cout<<max-min<<endl;
    }
}
