#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,row,col,ans;
    cin>>tc;
    for(i=0 ;  i<tc; i++)
    {
        int x,y,n,odd=0,even=0,un=0;
        cin>>n;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            if(x%2==0)
                even++;
            if(x%2==1)
                odd++;
            if(j%2==0)
            {
                if(x%2==1)
                    un++;
            }
            if(j%2==1)
            {
                if(x%2==0)
                    un++;
            }
           // cout<<"even = "<<even<<"  odd = "<<odd<<"  un = "<<un<<endl;
        }
      if(n%2==0)
      {
          if(even==odd)
            cout<<un/2<<endl;
          else
            cout<<"-1"<<endl;
      }
      else
      {
          if(even==odd+1)
            cout<<(un/2)<<endl;
          else
            cout<<"-1"<<endl;
      }
    }
}

