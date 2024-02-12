#include<bits/stdc++.h>
using namespace std;
vector <long long int> v;
vector <long long int> s;
int main()
{
    long long int tc,i,j,x,y,n,q,k,sum,l,r,z,res;
    cin>>tc;
    for(k=0 ; k<tc;  k++)
    {
        sum=0,res=0;
        cin>>n>>q;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            v.push_back(x);
            sum=sum+x;
            s.push_back(sum);
           // cout<<"sum="<<sum<<endl;
        }
        for(j=0 ; j<q ; j++)
        {
            res=0;
            cin>>l>>r>>z;
            if(l>=2)
            res=res+s[l-2];
            y=((r-l)+1)*z;
            res=res+y;
            res=res+s[s.size()-1]-s[r-1];
            if(res%2==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
                //cout<<"res = "<<res<<endl;

        }
        v.clear();
        s.clear();
    }

}

