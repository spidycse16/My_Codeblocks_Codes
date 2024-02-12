#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    long long int n,i,sum,tc;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>n;
        sum=0;
        long long int c0=0,c1=0;
        for(int j=0 ; j<n ; j++)
        {
            int x;
            cin>>x;
            if(x==1)
                c1++;
            if(x==0)
                c0++;
        }
        long long int res=0;
        res=pow(2,c0);
        res=res*c1;
        cout<<res<<endl;


}
}
