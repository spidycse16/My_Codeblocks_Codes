#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,row,col,ans;
    cin>>tc;
    for(i=0 ;  i<tc; i++)
    {
        int n,x,y,mi=INT_MAX;
        vector <int> v;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(j=0 ; j<v.size()-1 ; j++)
        {
            y=v[j+1]-v[j];
                if(y<mi)
                    mi=y;
        }
        cout<<mi<<endl;
    }
}
