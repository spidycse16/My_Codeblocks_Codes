#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x;
    char a;
    string s;
    vector<int> v;
    s= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //cin>>a;
    for(i=0 ; i<4 ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0 ; i<v.size() ; i++)
    {
        cout<<s[v[i]-1];
    }
}
