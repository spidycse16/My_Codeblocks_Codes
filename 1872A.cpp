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
        int a,b,c;
        cnt=0;
        cin>>a>>b>>c;
        if(a>b)
            swap(a,b);
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            for(i=0 ; ; i++)
            {
                cnt++;
                b=b-c;
                a=a+c;
                if(b<=a || a>=b)
                {
                    cout<<cnt<<endl;
                    break;
                }
        }
    }
}
}
