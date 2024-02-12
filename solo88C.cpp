#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int tc,i,x,y,z,temp=0;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
       int n,pos=0,j;
       cin>>n;
       if(n==1)
        cout<<"-1"<<endl;
       else if(n%2==0)
        cout<<n/2<<endl;
       else
        cout<<((n/2)+1)*(-1)<<endl;
    }

}


