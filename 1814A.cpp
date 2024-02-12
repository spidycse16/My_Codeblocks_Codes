#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,x,y,n,i;
    cin>>tc;
    for(long long int k=0 ; k<tc ; k++)
    {
        long long int flag=0;
        cin>>n>>x;
        if(n%2==0)
            flag=1;
        else
        {
            if(x%2==1)
                flag=1;
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}



