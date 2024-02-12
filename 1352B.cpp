#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define ma 0
#define slen s.size()
#define vlen v.size()
#define el endl
ll a,b,tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>x>>y;

        if(x==y)
        {
            cout<<"YES"<<el;
            for(i=1 ; i<=y ; i++)
                cout<<"1 ";
            cout<<el;
        }
        else if(x%2==0 && y%2==0)
        {
            if(x>=2*y)
            {
                cout<<"YES"<<el;
                while(y>0)
                {
                    if(y==1)
                    {
                        cout<<x<<el;
                        break;
                    }
                    cout<<"2 ";
                    x=x-2;
                    y--;
                }

            }
            else if(x>=(1*y))
            {
                 cout<<"YES"<<el;
            while(y>0)
            {
                if(y==1)
                {
                    cout<<x<<el;
                    break;
                }
                cout<<"1"<<" ";
                x=x-1;
                y--;
            }
            }
            else
                cout<<"NO"<<el;

        }
        else if(x>=2*y && x%2==0 && y%2==1)
        {
            cout<<"YES"<<el;
            while(y>0)
            {
                if(y==1)
                {
                    cout<<x<<el;
                    break;
                }
                cout<<"2"<<" ";
                x=x-2;
                y--;
            }
        }
        else if(x>=2*y && x%2==1 && y%2==0)
            cout<<"NO"<<el;
        else if(x>=y && x%2==1 && y%2==1)
        {
            cout<<"YES"<<el;
            while(y>0)
            {
                if(y==1)
                {
                    cout<<x<<el;
                    break;
                }
                cout<<"1"<<" ";
                x=x-1;
                y--;
            }

        }
        else
        {
            cout<<"NO"<<el;

        }
    }
}


