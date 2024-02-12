#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    int cnt=0,flag=0;
    cin>>a>>b;
    c=a+b;
    for(int i=0 ; i<c.size() ; i++)
    {
        if(c[i]=='#')
            cnt++;
    }
    if(cnt==2)
    {
        if(c[0]=='#' && c[3]=='#')
        {
            flag=1;
        }
        if(c[1]=='#' && c[2]=='#')
        {
            flag=1;
        }
    }
    if(flag==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    c.clear();
}
