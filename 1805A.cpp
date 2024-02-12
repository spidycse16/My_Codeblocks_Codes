#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,x,y,n,i;
    cin>>tc;
    for(long long int k=0 ; k<tc ; k++)
    {
     cin>>n;
     vector <int> v;
     int xo=0;
     for(i=0 ; i<n ; i++)
     {
         cin>>x;
         xo=xo^x;
         v.push_back(x);
     }
     for(i=0 ; i<n ; i++)
     {
         v[i]=v[i]^xo;
     }
     y=0;
     for(i=0 ; i<n ; i++)
     {
         y=y^v[i];
     }
     if(y==0)
        cout<<xo<<endl;
     else
        cout<<"-1"<<endl;

}
}


