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
    map <string,int> mp;
    cin>>n;
    int temp = -1;
    for(i=0 ; i<n ; i++)
    {
        cin>>s;
        mp[s]++;
        if(mp[s] > temp){
            temp = mp[s];
            str=s;
        }
    }

    cout<<str<<el;
}
