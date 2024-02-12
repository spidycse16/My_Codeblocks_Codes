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
        flag=0;
        cin>>n>>k;
        if(k%2==0 && n%2==1)
        flag=1;
        else if(k%2==1 && n%2==0)
            flag=1;
        else
        {
            x=sqrt(n);
            if(k*k<=n)
                {
                    cout<<"YES"<<el;
                }
            else
                flag=1;
        }
        if(flag==1)
            cout<<"NO"<<el;

    }
}
