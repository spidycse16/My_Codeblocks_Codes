#include<bits/stdc++.h>
using namespace std;
int flag=0;
string a,b,c,d;
int main()
{
    int i,j,cnt,x,y;
    cin>>c>>d;
    if(c.size()>=d.size())
    {
        a=c;
        b=d;
    }
    else
    {
        a=d;
        b=c;
    }
    //cout<<a<<" "<<b<<endl;
    for(i=b.size()-1,j=a.size()-1. ; i>=0 ; i--,j--)
    {
        //cout<<flag<<endl;
        x=a[j]-'0';
        y=b[i]-'0';
        //cout<<x<<" "<<y<<endl;
        if(x+y>9)
        {
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==1)
        cout<<"Hard"<<endl;
    else
        cout<<"Easy"<<endl;
}
