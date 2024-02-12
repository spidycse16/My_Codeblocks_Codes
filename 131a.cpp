#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ma 0
#define slen s.size()
#define vlen v.size()
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt;
ll mi=numeric_limits<ll>::max();
char ch;
string s,str;
vector <ll> v;
int main()
{
    cin>>s;
    cnt=0;
    for(i=0 ; i<slen ; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            cnt++;
    }
    if(cnt==slen)
    {
        for(i=0  ; i<slen ; i++)
        {
            ch=tolower(s[i]);
            cout<<ch;
        }
        cout<<el;
    }
    else if(s[0]>='a' && s[0]<='z' && cnt==slen-1)
    {
        ch=toupper(s[0]);
        cout<<ch;
        for(i=1 ; i<slen ; i++)
        {
            ch=tolower(s[i]);
            cout<<ch;
        }
    cout<<el;
    }
    else
        cout<<s<<endl;
}
