#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
map<ll,ll> mp;
set <ll> st;
bool isPrime(int n)
{
    int x;
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        ll l,r;
        cin>>l>>r;
        bool x=isPrime(l);
        if(l==r)
        {
            if(x==true)
            cout<<"-1"<<endl;

        }
        else if(l==r)
        {
            if(x==false)
            cout<<"X"<<el;
        }
        else
        {
            for(i=l ; i<=r ; i++)
            {
                if(i%2==0)
                {
                    if((__gcd(i/2,i/2))!=1)
                    {
                    cout<<i/2<<" "<<i/2<<endl;
                    break;

                    }
                }
            if(i==r)
                cout<<-1<<endl;
            }
        }

    }
}
