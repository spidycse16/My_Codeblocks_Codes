#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
map<ll,ll> mp;
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        vector <char> ch;
        char c;
        for(i=0 ; i<8 ; i++)
        {
            for(j=0 ; j<8 ; j++)
            {
                cin>>c;
                if(c!='.')
                {
                    ch.push_back(c);
                }
            }
        }
        for(i=0 ; i<ch.size() ; i++)
            cout<<ch[i];
        cout<<el;
    }
}


