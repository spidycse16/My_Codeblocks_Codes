#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,n,flag=0;
    double avg,x,sum=0;
    cin>>n;
    vector <double> v;
    for(i=0  ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
        sum=sum+x;
    }
    sort(v.begin(),v.end());
    v.push_back(0);
    for(i=0 ; i<v.size()-1 ; i++)
    {

        avg=sum/n;
        if(avg>=4.5)
            break;
            sum=sum+(5-v[i]);
        // cout<<avg<<endl;
        flag++;
    }
    cout<<flag<<endl;
}








