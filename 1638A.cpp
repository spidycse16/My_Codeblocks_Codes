#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,i,j,pos1,pos2,k;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int flag=0,temp=10000000;
        vector <int>v;
        //v.push_back(-100);
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        for(j=0 ; j<v.size()-1 ; j++)
        {
            if(v[j+1]<v[j])
            {
                flag++;
                pos1=j;
                break;
            }
        }
          for(j=pos1 ; j<v.size() ; j++)
          {
              if(v[j]<temp)
              {
                  flag++;
                  pos2=j;
              }
          }
          if(flag>=2)
          swap(v[pos1],v[pos2]);
        for(j=0 ; j<v.size() ; j++)
            cout<<v[j]<<" ";
    }
}
