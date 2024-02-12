#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,n;
    vector <int> :: iterator it;
    cin>>tc;
    for(int k=0 ; k<tc; k++)
    {
        vector <int> v;
        int ans=0;
        cin>>n;
        for(i=0 ; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(i=0 ; i<n-1; i++)
        {
            if(abs(v[i]-v[i+1])<=1)
            {
                ans++;
            }
        }
        if(v.size()-ans==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
