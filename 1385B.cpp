#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,tc,x;
    vector <int> v;
    vector <int> :: iterator it;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>n;
        for(j=0 ; j<2*n ; j++)
        {
            cin>>x;
            v.push_back(x);
            //v2.insert(x);
        }
        for(j=0 ; j<v.size() ; j++)
        {
            for(int k = 0 ; k<j ; k++)
            {
                if(v[j]==v[k])
                {
                    it=v.begin()+j;
                    v.erase(it);
                }
            }
        }
        for(j=0 ; j<v.size() ; j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
            v.clear();
    }
}
