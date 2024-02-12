#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,x,y,n,i;
    cin>>tc;
    for(long long int k=0 ; k<tc ; k++)
    {
        string s;
        int pos=0;
        cin>>n;
        cin>>s;
        char c=s[0],ch;
        for(i=s.size()-1 ; i>=0 ; i--)
        {
            ch=s[i];
            if(ch<c)
                {
                    pos=i;
                    break;
                }
            else if(ch==c)
            {
                pos=i;
            }
        }
        ch=s[pos];
        cout<<"ch="<<ch<<endl;

        s.erase(pos);
        s.insert(0,to_string(ch));
        cout<<s<<endl;
    }
}



