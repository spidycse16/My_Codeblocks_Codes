#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,x,y;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        long long int min_c=INT_MAX,min_a=INT_MAX,ans=0;
        vector <long long int> candy;
        vector <long long int> apple;
        int n;
        cin>>n;
        for(j=0 ; j<n*2 ; j++)
        {
            if(j<(n*2)/2)
            {
                cin>>x;
                if(x<min_c)
                    min_c=x;
                candy.push_back(x);
            }
            else
            {
                cin>>x;
                if(x<min_a)
                    min_a=x;
                apple.push_back(x);
            }
        }
        for(j=0 ; j<n ; j++)
        {
            x=candy[j]-min_c;
            y=apple[j]-min_a;
            if(x>y)
                ans=ans+x;
            else
                ans=ans+y;
        }
        cout<<ans<<endl;
    }
}



