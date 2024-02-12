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
        vector<string> v;
        for(i=0 ; i<3 ; i++)
        {
            cin>>s;
            v.push_back(s);
        }
        for(x=0 ; x<v.size() ; x++)
        {
            flag=0;
            s=v[x];
            int a=0,b=0,c=0;
        for(i=0 ;i<s.size() ; i++)
        {
            if(s[i]=='?')
                flag=1;
            if(s[i]=='A')
                a++;
            if(s[i]=='B')
                b++;
            if(s[i]=='C')
                c++;
        }
        if(flag==1)
        {

            if(a==0)
                cout<<"A"<<el;
            if(b==0)
                cout<<"B"<<el;
            if(c==0)
                cout<<"C"<<endl;
                break;
        }
        }

    }
}
