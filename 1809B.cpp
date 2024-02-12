long long  int_sqrt (long long x)
{
    long long ans = 0;
    for (long long k = 1LL << 30; k != 0; k /= 2)
    {
        if ((ans + k) * (ans + k) <= x)
        {
            ans += k;
        }
    }
    return ans;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc,x,y,n,j,i;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>n;
        x=int_sqrt(n);
        if((x*x==n))
            cout<<x-1<<endl;
        else
        cout<<x<<endl;
    }
}
