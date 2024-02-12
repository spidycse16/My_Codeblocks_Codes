
#include<bits/stdc++.h>
using namespace std;
int main()
{
       long long int tc,i,j,x,y;
      long long int cnt=0,z,ma=0;
       vector <long long int> b;
       vector <long long int> ans;
       int n;
       cin>>n;
       for(i=0 ; i<n ; i++)
       {
           cin>>z;
           b.push_back(z);
       }
       ans.push_back(b[0]);
       //cout<<ans[0];
       for(i=1 ; i<n ; i++)
       {
           if(ans[i-1]>ma)
            ma=ans[i-1];
           ans.push_back(b[i]+ma);
       }
       for(i=0 ; i<ans.size() ; i++)
        cout<<ans[i]<<" ";
       cout<<endl;
}
