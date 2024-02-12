#include<bits/stdc++.h>
using namespace std;
#define INF 2e18
int main()
{
    long long int tc,x,y,n,i;
    cin>>tc;
    for(int k=0 ; k<tc; k++)
    {
        long long int c,d,cost,round,mi=INF;
        vector <long long int> v;
        cin>>n>>c>>d;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        vector<long long int>::iterator it = unique(v.begin(), v.end());
        v.resize(distance(v.begin(), it));
        y=(n-v.size())*c;
        //cout<<y<<endl;
        round=v.size()-1;
        for(i= v.size()-1; i>=0 ; i--)
        {
            cost=(((v[i]-1)-round)*d)+((v.size()-(i+1))*c);

            //cout<<cost<<endl;
            round--;
            if(cost<mi)
                mi=cost;
        }
        cost=mi+y;
        mi=(n*c)+d;
        if(mi<cost)
        cost=mi;
        cout<<cost<<endl;
    }





}


