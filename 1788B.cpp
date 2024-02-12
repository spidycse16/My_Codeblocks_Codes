#include<bits/stdc++.h>
using namespace std;
int sum;
int digitsum(int n)
{
    sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}
int main()
{
    int tc,i,j,ans;
    vector <int> v;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        int n,x,y;
        cin>>n;
        if(n%2==0)
        {
            x=n/2;
            y=n/2;
        }
        else
        {
            x=n/2;
            y=n-x;
        }
        if(abs(digitsum(y)-digitsum(x))<=1)
        cout<<x<<" "<<y<<endl;
        else
        {
            for(j=n/2+1 ; j>=1 ; j=j-5)
            {
                x=j;
                y=n-x;
                if(abs(digitsum(y)-digitsum(x))<=1)
                    break;
            }
            cout<<x<<" "<<y<<endl;
        }
    }

}



