#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,sum=0;
    int y;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int x;
        int flag=0,pos1,pos2;
        sum=0;
        vector <int> v;
        cin>>x;
        for(int j=0; j<x ; j++)
        {
            cin>>y;
            v.push_back(y);
            if(flag==0 && v[j]==-1 && v[j-1]==-1)
            {
                flag=1;
                v[j]=1;
                v[j-1]=1;
            }
            sum=sum+y;
        }
        if(sum==x)
        {
            cout<<sum-4<<endl;
        }
        else
            cout<<accumulate(v.begin(),v.end(),0)<<endl;


    }
}
