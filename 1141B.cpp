#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,n,mx=0,cnt=0;
    cin>>n;
    vector <int> v;
    for(i=0  ; i<n ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    v.push_back(0);
    for(i=0 ; i<v.size() ; i++)
    {
        if(v[i]==0)
        {
            if(cnt>mx)
                mx=cnt;
            cnt=0;
        }
        else
            cnt++;
    }
    cnt=0;
   for(i=v.size()-2 ; i>=0 ; i--)
   {
       if(v[i]==1)
        cnt++;
       if(v[i]==0)
        break;
   }
   if(cnt>0)
   {
       for(i=0 ; i<v.size() ; i++)
       {
           if(v[i]==0)
            break;
           else
            cnt++;
       }
   }
    if(cnt>mx)
        mx=cnt;
    cout<<mx<<endl;
}

