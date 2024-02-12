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
map<ll,ll> mp;
set <ll> st;
ll arr[100005];
int main()
{
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
        arr[x]=i;
    }
    cin>>x;
    for(i=0 ; i<n ; i++)
    {
        y=x-v[i];
        if(y>0)
        {
            if(arr[y]!=0)
            {
                cout<<"["<<i<<","<<arr[y]<<"]"<<el;
                break;
            }
        }
    }
}
