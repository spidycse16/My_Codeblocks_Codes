#include<bits/stdc++.h>
using namespace std;
vector <int> v;
int i,j,k,l,tc,x,cnt=0,y,pos=0;

int main()
{

    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cnt=0;
        cin>>x;
        for(j=0 ; j<x ; j++)
        {
            cin>>y;
            v.push_back(y);

        }

        if
    {
        for(k=0 ; k<v.size()-1 ; k++)
            {
                for(l=k+1 ; l<v.size() ; l++)
                {
                    if(v[k]==v[l])
                    {
                        v.erase(v.begin());
                        cnt++;
                    }
                }
            }
        }
        else
        {
            v.erase(v.begin());
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
