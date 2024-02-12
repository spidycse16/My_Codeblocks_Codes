#include<bits/stdc++.h>
using namespace std;

const long long C = 1e9 + 7;
int main()
{
    long long int tc,i,j,x,y,ans=0,s=0;
    vector <long long int> v;
    vector <long long int> sum;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        cin>>x;
        v.push_back(x);
        s += x;
        s %= C;
        sum.push_back(s);
    }
   for(i=0 ; i<v.size()-1 ; i++)
    {
        long long temp = (v[i] * (sum[sum.size() - 1] - sum[i] + C)) % C;


        ans += temp;
        ans %= C;

    }
    cout<<ans<<endl;
}



