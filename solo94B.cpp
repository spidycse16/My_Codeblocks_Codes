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
        cin>>n>>x>>y;
        ans=x;
        for(i=0 ; i<y ; i++)
        {
            cin>>d>>m;
            if(d==ans)
                ans=m;
            else if(m==ans)
                ans=d;
        }
        cout<<ans<<el;
    }
}

