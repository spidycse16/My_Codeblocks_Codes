#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,x,n;
    vector <int> v;
    cin>>tc;
    for(int k=0 ; k<tc;  k++)
    {
        long long int l,r,low=-1,high=0,temp;
        cin>>l>>r;
        low=l,high=r;
        if(l>1)
        {
            l--;
            if(l%2==1)
            {
                l++;
                l=l/2;
                l=(l*(-1));
            }
            else
                l=l/2;
        }
            if(r%2==1)
            {
                r++;
                r=r/2;
                r=(r*(-1));
            }
            else
                r=r/2;
        if(low==1)
            cout<<r<<endl;
        else if(low==high)
            {
                if(low%2==0)
                    cout<<low<<endl;
                else
                    cout<<low*-1<<endl;
            }
        else
            cout<<r-l<<endl;
    }
}




