#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ma 0
#define slen s.size()
#define vlen v.size()
ll tc,x,y,n,i,j,k,d,m,z;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n;
        cin>>s;
        for(i=0 ; i<slen ; i++)
        {
            if(s[i]=='U')
                s[i]='D';
            else if(s[i]=='D')
                s[i]='U';
        }
        cout<<s<<endl;
    }
}
