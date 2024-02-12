#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,n;
    string s,s1;
    cin>>tc;
    s="314159265358979323846264338327950288";
    for(int i=0 ; i<tc ; i++)
    {
        cin>>s1;
        int cnt=0;
        for(int j=0 ; j<s1.size() ; j++)
        {
            if(s[j] == s1[j])
            {
                cnt++;
            }
            else
                break;
        }
        cout<<cnt<<endl;

    }
}
