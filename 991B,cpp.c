#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,i,j,x,n,flag=0,sum=0;
    cin>>n;
    vector <int> v;
    for(i=0  ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
        sum=sum+x;
    }
    sort(v.begin(),v.end());
    double avg;
    avg=sum/n;
    if(avg>=4.5)
        cout<<"0"<<endl;
    else
    {
        for(i=v.size()-1 ; i>=0 ; i--)
        {
            if(v[i]!=5)
            {
                flag++;
                sum=sum+(5-v[i])
                avg=sum/n;
                if(avg>=4.5)
                    break;
            }
        }
        cout<<flag<<endl;
    }
}







