#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,x,k;
    cin>>tc;
    for(int i=0 ; i<tc ; i++)
    {
        vector <int> v;
        int n,posa,posb;
        cin>>n;
        for(int j=0 ; j<n ; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(k=v.size()-1 ; k>=0 ; k--)
        {
            if(v[k]==0)
            {
                posa=k+1;
                break;
            }
        }
        int flag=0;
        if(k<0)
            flag=1;
        //cout<<"k="<<k<<endl;
        for(k=0 ; k<v.size() ; k++)
        {
            if(v[k]==0)
            {
                posb=k-1;
                break;
            }
        }
        if(flag==1)
            cout<<"0"<<endl;
        else
        cout<<abs(posa-posb)<<endl;
        v.clear();
    }
}
