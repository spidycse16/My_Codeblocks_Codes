
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,row,col,ans;
    cin>>tc;
    for(i=0 ;  i<tc; i++)
    {
        vector <int> v;
        set <int> s;
        int x,y,n,ma=0,mi=INT_MAX;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
}

