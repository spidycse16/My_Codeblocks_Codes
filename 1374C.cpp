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
        cin>>n;
        ans=0,cnt=0;
        cin>>s;
        for(i=0 ; i<slen ; i++)
        {
            if(s[i]=='(')
                cnt++;
            else
            {
            cnt--;
            if(cnt<0)
            {
                ans++;
                cnt=0;
            }
            }

        }
        cout<<ans<<el;
    }
}
