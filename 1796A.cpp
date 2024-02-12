#include<bits/stdc++.h>
using namespace std;
long long int a[5];
int main()
{
    int tc,x,i,j,k;
    string s;
    cin>>tc;
    string cmp,temp;
    temp="FBFFBFFB";
    for(i=0 ; i<7 ; i++)
    {
        cmp=cmp+temp;
    }
    //  cout<<cmp.size()<<endl;
    for(i=0 ; i<tc ; i++)
    {
        int n;
        cin>>n;
        cin>>s;
        if(strstr(cmp.c_str(),s.c_str()))
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}




