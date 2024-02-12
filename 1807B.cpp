#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,y,n;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int even=0,odd=0;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            if(x%2==0)
                even=even+x;
            else
                odd=odd+x;
        }
        if(even>odd)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

