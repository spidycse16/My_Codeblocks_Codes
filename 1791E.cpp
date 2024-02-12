
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,ans;
    vector <int> v;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        int x,y,a,sum=0,temp;
        cin>>x;
        for(j=0 ; j<x; j++)
        {
            cin>>y;
            v.push_back(y);
        }
        for(int k=0 ; ; k++)
        {
            for(j=0 ; j<v.size()-1 ; j++)
            {
                if(v[j]<0 && v[j+1]<0)
                {
                    v[j]=v[j]*(-1);
                    v[j+1]=v[j+1]*(-1);
                }
                else if(v[j]<0 && v[j+1]<(v[j]*(-1)))
                {
                    v[j]=v[j]*(-1);
                    v[j+1]=v[j+1]*(-1);
                }
                else if(v[j]>0 && (v[j+1]*(-1)>v[j]))
            {
                v[j]=v[j]*(-1);
                    v[j+1]=v[j+1]*(-1);
                }
            }
            if(j==x-1)
                break;
        }
        sum=0;
        for(int k=0 ; k<v.size() ; k++)
        {
            sum=sum+v[k];
        }
        cout<<sum<<endl;
        v.clear();
    }

}




