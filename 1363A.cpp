#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ma 0
#define slen s.size()
#define vlen v.size()
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n>>x;
        ll even=0,odd=0;
        flag=0;
        for(i=0 ;  i<n ; i++)
        {
            cin>>y;
            if(y%2==0)
            {
                even++;
            }
            else
                odd++;
        }
        if(odd==0)
            cout<<"NO"<<el;
        else
        {
            for(i=1 ; i<=odd ; i+=2)
            {
                if(i>x)
                    break;
                if((x-i)<=even)
                {
                    //cout<<"CK"<<el;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"YES"<<el;
            else
                cout<<"NO"<<el;
        }

    }
}

