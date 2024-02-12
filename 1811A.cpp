#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,x,y,n,i;
    cin>>tc;
    for(long long int k=0 ; k<tc ; k++)
    {
        int n,d,pos=-1;
        string s;
        cin>>n>>d;
        cin>>s;
        for(i=0 ; i<n ; i++)
        {
            if(s[i]-'0' <d)
            {
                pos=i;
                break;
            }
        }
        if(pos==-1)
            cout<<s<<d<<endl;
        else
        {
            s.insert(pos,to_string(d));
            cout<<s<<endl;
        }

    }
}

