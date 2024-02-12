#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,x,tc,n;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        long long int chk;
        cin>>x>>n;
        chk=x;
            long long int temp;
            temp=n;
        for(j=0 ; j<n ; j++)
        {
            if(chk%2==0)
                x=x-temp;
                else
                    x=x+temp;
            temp++;
                chk=x;
        }
        cout<<x<<endl;

    }
}
