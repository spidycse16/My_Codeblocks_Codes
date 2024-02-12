#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x,y,n,i;
    cin>>tc;
    for(int k=0 ; k<tc; k++)
    {
        int mi=INT_MAX,pos;
        vector <int> v;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            if(x<mi)
            {
                mi=x;
                pos=i;
            }
            v.push_back(x);
        }
       if(pos-1>=mi)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }

}
