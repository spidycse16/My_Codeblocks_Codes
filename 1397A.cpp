#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ma 0
#define slen s.size()
#define vlen v.size()
#define el endl
ll arr[10000];
ll tc,x,y,n,i,j,k,d,m,z;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n;
        for(k=0 ; k<n ; k++)
        {
            cin>>s;
            for(i=0 ; i<slen ; i++)
            {
                arr[s[i]-'a']++;
            }
        }
        x=0;
        for(i=0; i<30 ; i++)
        {
            if(arr[i]!=0)
            {
                x=__gcd(x,arr[i]);
                arr[i]=0;
            }
        }
        if(x%n==0)
            cout<<"YES"<<el;
        else
            cout<<"NO"<<el;
    }
}
