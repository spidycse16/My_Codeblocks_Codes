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
        cin>>n>>k;
        if(k%(n-1)==0)
            x=(k/(n-1));
        else
        {

            i=((k/(n-1))*(n-1))+(n-1);
            x=(i/(n-1));
        }

        cout<<k+x-1<<el;

    }

}


