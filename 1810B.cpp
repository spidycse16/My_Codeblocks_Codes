#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc,x,y,n,i,lim=1;
    cin>>tc;
    for(int k=0 ; k<tc; k++)
    {
        lim=2199023255551;
        int cnt=0;
        vector <int> v;
        cin>>n;
        if(n%2==0)
            cout<<-1<<endl;
        else
        {
            if(n>lim)
                cout<<"-1"<<endl;
            else
            {
               while(n>1)
               {
                   int chk=n/2;
                   if(chk%2==0)
                   {
                       v.push_back(1);
                       n=(n+1)/2;
                   }
                   else
                   {
                       v.push_back(2);
                       n=(n-1)/2;
                   }
                   cnt++;
               }
            }
            cout<<cnt<<endl;
            for(i=v.size()-1 ; i>=0 ; i--)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
            v.clear();

        }
}
}


