#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,tc,j,x;
    vector <int> v;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        for(int k=0 ; k<7 ; k++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(j=0 ; j<4 ; j++)
        {
            for(int k=j+1 ; k<5 ; k++)
            {
                for(int l=k+1 ; l<6 ; l++)
                {
                    if(v[j]+v[k]+v[l]==v[6])
                    {
                        cout<<v[j]<<" "<<v[k]<<" "<<v[l]<<endl;
                        break;
                    }
                }
            }
        }
        v.clear();
    }
}
