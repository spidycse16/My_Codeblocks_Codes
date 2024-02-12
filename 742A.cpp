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

    cin>>n;
    if(n==0)
        cout<<"1";
    else if(n%4==0)
        cout<<"6"<<endl;
    else if(n%4==1)
        cout<<"8"<<endl;
    else if(n%4==2)
        cout<<"4"<<endl;
    else if(n%4==3)
        cout<<"2"<<endl;
}
