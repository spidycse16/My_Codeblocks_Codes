#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,x,y=0,n,j,i;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        vector <int> v;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(j=0 ; j<v.size() ; j++)
        {
            y=0;
            for(int k=0 ; k<v.size() ; k++)
            {
                if(k!=j)
                {
                     y=y^v[k];
                //cout<<"y="<<k<<endl;
                }

            }
            if(y==v[j])
            {
                cout<<v[j]<<endl;
                break;
            }
        }
        v.clear();
    }
}

