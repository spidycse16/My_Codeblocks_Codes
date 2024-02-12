#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    int tc;
    cin>>tc;
    for(int i=0 ; i<tc ; i++)
    {
        int flag=0;
        cin>>s>>c;
        for(int j=0 ; j<=s.size() ; j++)
        {
           if(s[j]==c)
           {
               if(j%2==0)
               {
                   flag=1;
                   break;
               }
           }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
