#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,y,ma,alice,cnt=0,ans;
    string s;
    vector <int> v;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
      cin>>s;
      cnt=0,ans=0;
      s+="0";
      ma=0;
      for(j=0 ; j<s.size() ; j++)
      {
          if(s[j]=='1')
          {
              cnt++;
          }
          else
          {
              v.push_back(cnt);
              cnt=0;
          }
      }
      sort(v.begin(),v.end());
      cnt=0;
      for(j=v.size()-1 ; j>=0 ; j--)
      {
          if(cnt%2==0)
          {
              ans=ans+v[j];
          }
          cnt++;
      }
      cout<<ans<<endl;
      v.clear();
    }
}




