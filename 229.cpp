#include<bits/stdc++.h>
using namespace std;
pair <long long int,long long int> p;
vector <pair <long long int,long long int>> v;
long long int del=0;
int main()
{
    long long int n,w,a,b,x;
    cin>>n>>w;
    for(int i=0 ;i<n ; i++)
    {
        cin>>a>>b;
        p.first=a;
        p.second=b;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
   for(int i=v.size()-1 ; i>=0 ; i--)
   {
       //cout<<v[i].first<<endl;
       if(w>0)
       {
           if(v[i].second>w)
           {
               v[i].second=w;
           }
           x=v[i].first*v[i].second;
           //cout<<x<<endl;
           del=del+x;
           w=w-v[i].second;
       }
   }
   cout<<del<<endl;
   v.clear();

}
