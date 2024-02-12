#include<bits/stdc++.h>
using namespace std;
int main()
{

    int tc,i,j,k;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        int a;
        a=s[s.size()-1];
        cout<<a-96<<endl;
    }
}
