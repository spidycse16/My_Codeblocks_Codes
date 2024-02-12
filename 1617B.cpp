#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main()
{
    ll tc,i,j,gc;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        ll n,a,b,c;
        cin>>n;
        for(a=2 ; a<=(n-3) ; a++)
        {
            b=(n-a-1);
            if(__gcd(a,b)==1)
                break;
        }
        cout<<a<<" "<<b<<" "<<"1"<<endl;
    }
}
