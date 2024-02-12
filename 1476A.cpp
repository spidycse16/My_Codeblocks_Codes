#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,res,flag,ma;
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
        if(n==k)
            cout<<"1"<<el;
        else if(n<k)
        {
            res=(k/n);
            if(k%n!=0)
                res++;
            cout<<res<<el;
        }
        else if(n>k)
        {
            if(n%k==0)
                cout<<"1"<<el;
            else
                cout<<"2"<<el;
        }
    }
}
