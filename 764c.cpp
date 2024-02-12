#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,num,i,j,a;
    set<int> s;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>num;
            s.insert(num);
            while(num>0)
            {
                s.insert(num/2);
                num=num/2;
            }
        }
        int flag=0;
        for(j=1 ; j<=n ; j++)
        {
            for(auto it=s.begin() ; it!=s.end() ; it++)
            {
                if(j==*it)
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag!=n)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
            s.clear();
    }
}

