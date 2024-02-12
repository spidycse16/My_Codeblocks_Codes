
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,ans;
    vector <int> v;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        int x=0,y=0,flag=0,n;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            char s;
            cin>>s;
            if(s=='U')
                y++;
            else if(s=='D')
                y--;
            else if(s=='L')
                x--;
            else
                x++;

            if(x==1 && y==1)
            {
                flag=1;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

