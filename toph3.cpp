#include<bits/stdc++.h>
using namespace std;
int sieve[10000];

int main()
{
    int i,j,x,y,cnt=0;
    cin>>y;
    vector <int> v;
    x=2;
    for(i=0 ; ; i++)
    {
        if(y<=1)
        {
            if((y/x)==v[v.size()-2])
                v[v.size()-1]++;
            else
            {
                v.push_back(y/x);
                v.push_back(1);
            }
            break;
        }
        else if(y%x==0)
        {
            cnt++;
            y=y/x;
        }
        else
        {
            if(cnt>=1)
            {
                v.push_back(x);
                v.push_back(cnt);
                cnt=0;
                x++;
            }
            else
                x++;
        }
    }
    for(i=0 ; i<v.size() ; i++)
        cout<<v[i]<<endl;

}
