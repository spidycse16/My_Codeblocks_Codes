#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,tc,x,y,a,b,m,n;
    cin>>m>>n;
    if(m%2==1)
    {
        if(n<=(m/2)+1)
        {
            x=(2*(n-1))+1;
        }
        else
            {
                n=n-((m/2)+1);
                x=2*n;
            }
    }
    else
    {
        if(n<=(m/2))
        {
             x=(2*(n-1))+1;
        }
         else
            {
                n=n-((m/2));
                x=2*n;
            }
    }
      cout<<x<<endl;
}

