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
        string ans;
        cin>>x;
        cin>>s;
        if(x<=3)
            cout<<s<<endl;
        else
        {
            for(i=0 ; i<x-2 ; i=i+y)
            {
                cout<<"i="<<i<<el;

              if(s[i+2]=='a' || s[i+2]=='e')
              {
                  if(s[i+3]=='a' || s[i+3]=='e')
                  {
                         ans=ans+s[i];
                    ans=ans+s[i+1];
                    y=2;
                    ans=ans+'.';
                  }
              }
                else
                {

                       ans=ans+s[i];
                    ans=ans+s[i+1];
                    ans=ans+s[i+2];
                    ans=ans+'.';
                    y=3;
                }

            }
        }
        ans=ans+s[s.size()-2];
        ans=ans+s[s.size()-1];
        cout<<ans<<endl;
        ans.clear();
    }
}
