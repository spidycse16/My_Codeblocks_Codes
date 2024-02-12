#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,x,tc;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int cnt=0;
       cin>>s;
        for(j=0 ; j<s.size()-1 ; j++)
        {

            if(s[j]!=s[j+1])
            {

                s.erase(j,j+1);
                cnt++;
                 j=0;
            }
            cout<<cnt<<endl;

        }
        if(cnt%2==1)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
}

