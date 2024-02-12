#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define ma 0
ll tc,x,y,n,i,j,k,d,m,z;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        ll flag=0,pos=0;
        cin>>s;
        char low=s[0];
        for(i=1 ; i<slen ; i++)
        {
            if(s[i]<=low)
            {
                low=s[i];
            }
        }
        for(i=slen-1 ; i>=1 ; i--)
        {
            if(s[i]==low)
            {
                flag=1;
                pos=i;
                break;
            }
        }
        low=s[pos];
        if(flag==0)
            cout<<s<<endl;
        else
        {
            s.erase(pos,1);
            s.insert(0,1,low);
            cout<<s<<endl;
        }
    }
}
