#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str1,str2;
vector <ll> v;
vector <ll> v1;

int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n;
        cin>>s;
        flag=0;
        for(i=0 ; i<n ; i++)
        {
            if(s[i]=='0')
            {
                str1=str1+'0';
                str2=str2+'0';
            }
            if(s[i]=='1')
            {
                if(flag==0)
                {
                    str1=str1+'1';
                    str2=str2+'0';
                    flag=1;

                }
                else
                {
                    str1=str1+'0';
                    str2=str2+'1';
                    flag=1;
                }
            }
            if(s[i]=='2')
            {
                if(flag==0)
                {
                    str1=str1+'1';
                    str2=str2+'1';

                }

                else
                {
                    str1=str1+'0';
                    str2=str2+'2';
                }
            }
        }
        cout<<str1<<el;
        cout<<str2<<el;
        str1.clear();
        str2.clear();
    }
    return 0;
}

