#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,tc,i,j,n,x;
    string s;
    vector <char> v;
    vector <char> :: iterator it;
    cin>>tc;
    for(j=0  ; j<tc ; j++)
    {
        int cnt=0;
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            char z;
            cin>>z;
            v.push_back(z);
        }
        it=unique(v.begin(),v.begin()+n);
        v.resize(distance(v.begin(),it));
        for(it=v.begin() ; it!=v.end() ; it++)
        {
            cout<<*it<<endl;
            if(*it=='M' || *it=='m')
            {
                if(*it++=='e' || *it++=='E')
                {
                    if(*it+2=='o' || *it+3=='O')
                    {
                        if(*it+3=='w' || *it+3=='W')
                        {
                            cnt++;
                            break;
                        }
                    }
                }
            }
        }
        if(cnt==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        v.clear();
    }

}





