#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,tc;
    cin>>tc;
    for(i=0  ; i<tc  ; i++)
    {
        cin>>x;
        int temp=0,flag=0,cnt=0;
        vector <int> v;
        temp=x;
        while(temp>0)
            {
                cnt++;
                v.push_back(temp%10);
                if(temp%2!=0)
                {
                    flag++;
                }
                temp=temp/10;
            }
        if(x%2==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        else if(v[v.size()-1]%2==0)
        {
            cout<<"1"<<endl;
            continue;
        }
        else if(flag==cnt)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
            cout<<"2"<<endl;

    }
}
