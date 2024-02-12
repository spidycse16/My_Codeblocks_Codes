#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,y,n,i,j,k,d,m,z,cnt,ans,flag,ma;
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
        long long int x,res=0;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
           res=res+x;

        }
        long long int sq=sqrt(res);
        if(sq*sq==res)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
