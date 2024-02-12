#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,tc,i;
    string s;
    vector <int> v;
    cin>>tc;
    for(i=0  ; i<tc ; i++)
    {
        cin>>a>>b>>c>>d;
        if(a>b)
            swap(a,b);
        if(c>d)
            swap(c,d);
        if(a+c==b && a+c==d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        //v.clear();
    }

}



