
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,ans;
    string  v;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        int x=0,y=0,flag=0,n;
        cin>>n;
        cin>>v;
        y=n;
        for(j=0 ; j<(n/2) ; j++)
        {
            //cout<<"v[j = "<<v[j]<<"v[j-n-1] = "<<v[n-j-1]<<endl;
            if(v[j]=='0' && v[n-j-1]=='1')
                y=y-2;
            else if(v[j]=='1' && v[n-j-1]=='0')
                y=y-2;
                else
                    break;
        }
        cout<<y<<endl;
        v.clear();

    }

}



