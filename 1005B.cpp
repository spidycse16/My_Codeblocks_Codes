#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,x,n,flag=0,it,cnt=0;
    vector <int> v;
    string s,s1;
    cin>>s>>s1;
    int len=s.size()+s1.size();
    if(s1.size()>s.size())
        swap(s,s1);
    it=s1.size()-1;
    for(i=s.size()-1 ; i>=0 ; i--)
    {
        if(s[i]!=s1[it])
        {
            break;
        }
        else
        {
            cnt++;
            it--;
        }
       // cout<<cnt<<endl;

    }
        cout<<len-(cnt*2)<<endl;
}





