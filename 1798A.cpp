#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,x,y=0,n,j,i,a,b,c;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int mx1=0,mx2=0,temp=0,pos1,pos2;
        vector <int> v;
        vector <int> v1;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            if(x>mx1)
            {
                mx1=x;
                pos1=j;
            }
            v.push_back(x);
        }
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            if(x>mx2)
            {
                pos2=j;
                mx2=x;
            }
            v1.push_back(x);
        }
        if(v[v.size()-1]==mx1 && v1[v1.size()-1]==mx2)
            cout<<"YES"<<endl;
        else
        {
            swap(v[pos1],v1[pos1]);
            {
                if(v1[pos1]>mx1)
                    mx1=v1[pos1];
                if(v[pos1]>mx2)
                    mx2=v[pos1];
            }
            if(v[v.size()-1]==mx1 && v1[v1.size()-1]==mx2)
                cout<<"YES"<<endl;
            else
                swap(v[pos1],v1[pos1]);
            {
                mx1=v[pos1];
                mx2=v1[pos1];
            }
            swap(v[pos2],v1[pos2]);
            {
                if(v1[pos2]>mx1)
                    mx1=v1[pos2];
                if(v[pos2]>mx2)
                    mx2=v[pos2];
            }
            if(v[v.size()-1]==mx1 && v1[v1.size()-1]==mx2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
}


