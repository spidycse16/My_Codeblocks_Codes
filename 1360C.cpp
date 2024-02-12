#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        cin>>n;
        flag=0;
        vector <ll> even;
        vector <ll> odd;
        vector <ll> dif;
        for(i=0 ; i<n ; i++)
        {
            cin>>x;
            if(x%2==0)
                even.push_back(x);
            else
                odd.push_back(x);

        }
        if(even.size()%2==0 && odd.size()%2==0)
            flag=1;
        else if(even.size()%2==1 && odd.size()%2==1)
        {
            for(i=0 ; i<even.size() ;  i++)
            {
                for(j=0 ; j<odd.size() ; j++)
                {
                    if(abs(even[i]-odd[j])==1)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
            cout<<"YES"<<el;
        else
        cout<<"NO"<<el;
        v.clear();
    }
}
