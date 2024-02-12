#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt=0,x;
    vector <int> v;
    for(i=0 ; i<4 ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0 ; i<v.size()-1 ; i++)
    {
        if(v[i]==v[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
}
