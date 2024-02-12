#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,p;
    int i,j,temp,x,tc,y,pos;
    cin>>tc;
    //dcin>>s;
    for(int k=0 ; k<tc ; k++)
    {
        cin>>s;
        cin>>s1;
        for(i=0 ; i<s.size()-1 ; i++)
        {
            if(s[i]==s[i+1])
            {
                pos=i+1;
                temp++;
                p=s;
            }
        }

        for(i=0 ; i<s1.size()-1 ; i++)
        {
            if(s1[i]==s1[i+1])
            {
                pos=i+1;
                temp++;
                p=s1;
            }
        }
    }

    if(temp==2)
        cout<<"NO"<<endl;
    else if(temp==0)
    {
       cout<<"YES"<<endl;
    }
    else
    {
        cout<<p<<endl;
    }
}
