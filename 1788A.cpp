

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,ans;
    vector <int> v;
    cin>>tc;
    for(i=0 ; i<tc; i++)
    {
        int x=0,n,y,j,k=0,l,flag=0;
        cin>>n;
        vector <int> v;
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            v.push_back(x);
            if(x==2)
            {
                flag=1;
                k++;
            }
        }
        y=0;
        if(flag==0)
            cout<<"1"<<endl;
        else
        {
            if(k%2==1)
                cout<<"-1"<<endl;
            else
            {
                for(j=0 ; j<v.size() ; j++)
                {
                    if(v[j]==2)
                        y++;
                    if(y==k/2)
                        break;
                }
                cout<<j+1<<endl;
            }
        }


}
}




