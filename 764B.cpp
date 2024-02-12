#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,n,a,b,c,dif1,dif2;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cin>>a>>b>>c;
        dif1= abs(a-b);
        dif2= abs(b-c);
        if(dif1==dif2)
            cout<<"YES"<<endl;
        else
        {
            int flag=0;
            int m=min(min(a,b),c);
            if(a==m)
            {

            }
    }

}
}
