#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,numbers,bars,left_bar,right_bar,left_num,right_num;
    string s;
    cin>>s;
    for(i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='=')
            bars++;
        if(s[i]=='^')
        {
            left_bar=bars;
            left_num=numbers;
            bars=0;
            numbers=0;
        }
        else
            numbers++;
    }
    if(numbers==0)
        cout<<"balance"<<endl;
    else if()
}

