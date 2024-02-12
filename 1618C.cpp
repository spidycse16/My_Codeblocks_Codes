#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,tc,x,y,mod;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        vector <long long int> v;
        vector <long long int> even;
        vector <long long int> odd;
        int cnt=0,ans;
        cin>>x;
        for(j=0 ; j<x ; j++)
        {
            cin>>y;
            if(j%2==0)
                even.push_back(y);
            else
                odd.push_back(y);
        }
        long long int g1=even[0];
        for(j=1 ; j<even.size(); j++)
        {
            g1=__gcd(g1,even[j]);
        }
        for(j=0 ; j<odd.size(); j++)
        {
            if(odd[j]%g1!=0)
            {
                cnt++;
            }
        }
        if(cnt==odd.size())
        {
            cout<<g1<<endl;
            even.clear();
            odd.clear();
            v.clear();
            continue;
        }
        long long int g2=odd[0];
        for(j=1 ; j<odd.size(); j++)
        {
            g2=__gcd(g2,odd[j]);
        }
        for(j=0,cnt=0 ; j<even.size(); j++)
        {
            if(even[j]%g2!=0)
            {
                cnt++;
            }
        }
        if(cnt==even.size())
        {
            cout<<g2<<endl;
            even.clear();
            odd.clear();
            v.clear();
            continue;
        }
        //cout<<"g"<<g1<<"g"<<g2<<endl;
        cout<<"0"<<endl;

    }
}
