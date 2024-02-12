#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,n,flag=0;
    set <long long int> s;
    cin>>tc;
    for(i=1 ;  ; i++)
    {
        if(flag==2)
            break;
        if(i*i<=1000000000)
            s.insert(i*i);
        else
            flag++;
        if(i*i*i<=1000000000)
            s.insert(i*i*i);
    }
    for(i=0 ; i<tc ; i++)
    {
        cin>>n;
        long long int cnt=0;
        for(auto it=s.begin() ; it!=s.end() ; it++)
        {
            //cout<<*it<<endl;
           long long int tem=*it;
            if(tem<=n)cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
}
