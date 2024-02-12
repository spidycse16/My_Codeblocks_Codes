#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair <int,int> p;
    double x;
    vector <pair<int,int>> v;
    vector <double> slo;
    int n,i,j,a,b;
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        cin>>a>>b;
        p.first=a;
        p.second=b;
        v.push_back(p);
    }
    cout<<v.size()<<endl;
    for(i=0 ; i<v.size()-1 ; i++)
    {
        for(j=i+1 ; j<v.size() ; j++)
        {
            x=(v[j].second-v[j].first)/(v[i].second-v[i].first);
            slo.push_back(x);
        }
    }
     for(i=0 ; i<slo.size() ; i++)
        cout<<slo[i]<<endl;

}
