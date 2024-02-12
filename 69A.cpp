#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,x,sum1=0,sum2=0,sum3=0;
    vector <int> v;
    cin>>tc;
    for(i=0 ; i<tc*3 ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=0 ; i<v.size()-2 ; i+=3)
    {
        sum1=sum1+v[i];
    }
    for(i=1 ; i<v.size()-1 ; i+=3)
    {
        sum2=sum2+v[i];
    }
    for(i=2 ; i<v.size() ; i+=3)
    {
        sum3=sum3+v[i];
    }
    if(sum1==0 && sum2==0 && sum3==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    //cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
}
