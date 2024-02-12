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
ll bins(ll n)
{
    ll left=1,right=10007;
    ll mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        d=mid*mid*mid;
        if(d==n)
            return 1;
        else if(d<n)
            left=mid+1;
        else
            right=mid-1;
    }
    return 0;
}

int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>x;
        flag=0;
        for(i=1 ; i*i*i<=x; i++)
        {
           n=x-(i*i*i);
          // cout<<"i = "<<i<<"n = "<<n<<el;
           if(bins(n)==1)
           {
               flag=1;
               break;
           }
        }
        if(flag==1)
            cout<<"YES"<<el;
        else
            cout<<"NO"<<el;
    }
}
