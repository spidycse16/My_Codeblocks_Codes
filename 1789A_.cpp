#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int tc,i,j,k,x,ans=0,flag;
    vector <int> v;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int n;
        flag=0;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            v.push_back(x);
        }
        for(j=0 ; j<v.size()-1 ; j++)
        {
            for(k=j+1 ; k<v.size()  ; k++)
            {
                if(__gcd(v[j],v[k])<=2)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        v.clear();
    }
}



