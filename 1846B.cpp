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
        char s[3][3];

        char ch;
        flag=0;
        for(i=0 ; i<3 ; i++)
        {
            for(j=0  ; j<3 ; j++)
            {
                cin>>s[i][j];
            }
        }
        for(i=0 ; i<3 ; i++)
        {
            for(j=0 ; j<2 ; j++)
            {
                if(s[i][j]==s[i][j+1])
                    flag++;
            }
        }
        if(flag==2)
        {
            ch=s[i][j];
            break;

        }
        else
            flag=0;

         for(i=0 ; i<3 ; i++)
        {
            for(j=0 ; j<2 ; j++)
            {
                if(s[j][i]==s[j][i+1])
                    flag++;
            }
        }
        if(flag==2)
            {
            ch=s[j][j];
            break;
            }
        else
            flag=0;
    }
    if(s[0][0]==s[1][1])
    {
        if(s[1][1]==s[2][2])
        {
        flag=2;
        ch=s[0][0];
        break;

        }
    }
    if(s[0][2]==s[1][1] && s[1][1]==s[2][0])
    {
        flag=2;
        ch=s[1][1];
        break;
    }
       if(flag==2)
        cout<<ch<<el;
       else
        cout<<"DRAW"<<el;


}

