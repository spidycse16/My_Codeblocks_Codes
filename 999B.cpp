#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,x,n,flag=0,it,cnt=0;
    cin>>n;
    int l=0,r;
    string s;
    cin>>s;
    for(i=2 ; i<=n ; i++)
    {
        if(n%i==0)
        {
           // cout<<"i ="<<i<<endl;
            r=i;
            reverse(s.begin(),s.begin()+r);
        }
    }
        cout<<s<<endl;
}






