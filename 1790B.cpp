#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,s,r,n;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        cin>>n>>s>>r;
        vector <int> v;
        v.push_back(s-r);
        n--;
        while(r>0)
        {
            int avg;
            if(r%n==1)
            {
                avg=(r/n)+1;
                v.push_back(avg);
                r=r-avg;
            }
            else
            {
                avg=r/n;
                v.push_back(avg);
                r=r-avg;
            }
            n--;
        }
        for(int j=0 ; j<v.size() ;j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
    }
}
