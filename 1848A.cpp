#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,c,d,m,z,cnt,ans,res,flag,ma;
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
        flag=0;
        cin>>m>>n>>k;
        cin>>x>>y;
        for(i=0 ; i<k ; i++)
        {
            cin>>c>>d;
            if((abs(x-c)==abs(y-d)))
                flag=1;
        }
    if(flag==1)
        cout<<"NO"<<el;
    else
        cout<<"YES"<<el;
    }
}
