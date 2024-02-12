#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
map<ll,ll> mp;
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {
        vector <ll> v;
        vector <ll> v1;
        cin>>n;
        flag=0,res=0,ans=0,m=0,k=0,ma=0;
        int arr[n+5]={0};
        for(i=0 ; i<n-1 ; i++)
        {
            cin>>x;
            v.pb(x);
        }
        ans=(n*(n+1))/2;
        for(i=0 ; i<vlen-1 ; i++)
        {
            res=res+(v[i+1]-v[i]);
            if((v[i+1]-v[i])<=n)
            {
                y=(v[i+1]-v[i]);
               // cout<<"y="<<y<<el;
                arr[y]++;
            }
            if((v[i+1]-v[i])>n)
            {
                k++;
            if(k>1)
            {
                flag=1;
                break;

            }
                //cout<<"k= "<<k<<el;
                ma=v[i+1]-v[i];
            }
        }
        for(i=1 ; i<=n ; i++)
        {
            if(arr[i]==0)
                m=m+i;
            if(arr[i]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<el;
        else
        {
           if(k==1)
           {
            if(m==ma)
                cout<<"YES"<<el;
                else
                    cout<<"NO"<<el;
           }
           else
           {
               if((ans-res)==m)
                cout<<"YES"<<el;
               else
                cout<<"NO"<<el;
           }

        }

    }
}
