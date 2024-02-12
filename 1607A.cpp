#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,ans,x;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        string s,a;
        vector <int> v;
        char x,y;
        cin>>s;
        cin>>a;
        //cout<<a<<endl<<s<<endl;
        for(j=0 ; j<a.size() ; j++)
        {
            for(int k=0 ; k<s.size() ; k++)
            {
                x=a[j];
                y=s[k];
                if(x==y)
                {
                    v.push_back(k+1);
                }
            }
        }
        for(j=0,ans=0 ; j<v.size()-1 ; j++)
        {

            //cout<<"k= "<<v[j]<<endl;
            ans=ans+abs(v[j]-v[j+1]);
        }
        cout<<ans<<endl;
        s.clear();
        a.clear();
        v.clear();
    }
}
