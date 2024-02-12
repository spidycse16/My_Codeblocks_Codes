#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,tc,i,cnt=1;
    vector <int> v;

    int mx=1;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    v.push_back(-1);
    for(i=1;i<v.size()-1;i++)
    {
        if(v[i]<v[i-1])
        {
            mx=max(mx,cnt);
            cnt=0;
        }
        cnt++;
    }
    cout<<mx<<endl;
    v.clear();
}
