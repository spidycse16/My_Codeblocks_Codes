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
        vector <int> v;
        int flag0=100,flag1=0,index;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            if(x==0)
                flag0=0;
            if(x<0)
                flag1++;
                if(x>ma)
                {
                    ma=x;
                    index=i;
                }
            v.pb(x);
        }
        if(flag0=0)
        cout<<"0"<<endl;
        else if(flag1==0)
        {
            cout<<"1"<<endl;
            cout<<"1 0"<<endl;
        }
        else if(flag1>0)
        {
           if(flag1%2!=0)
            cout<<"0"<<endl;
           else
           {
               cout<<"1"<<endl;
               cout<<"1 0"<<endl;
           }
        }

    }
}
