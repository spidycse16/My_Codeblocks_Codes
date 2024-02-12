#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,x,y,max=-1,man=0,eu=0;
    double ans;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>x;
        if(x<0)
            x=abs(x);
        if(x>max)
            max=x;
        man=man+x;
        eu=eu+(x*x);
    }
    cout<<man<<endl;
    cout<<setprecision(15)<<sqrt(eu)<<endl;
    cout<<max<<endl;
}

