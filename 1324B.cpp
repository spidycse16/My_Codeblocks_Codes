#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ma 0
#define slen s.size()
#define vlen v.size()
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,flag,ans,res;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        flag=1;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            v.push_back(x);
        }
       for(i=0 ; i<vlen-2 ; i++)
        {
            for(j=i+1 ; j<vlen ; j++)
            {
                if(v[i]==v[j] && j!=i+1)
                {
                    flag=2;
                    break;
                }
            }
        }
        if(flag==2)
            cout<<"YES"<<el;
        else
            cout<<"NO"<<el;
        v.clear();
    }
}
