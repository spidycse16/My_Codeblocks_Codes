#include<bits/stdc++.h>
using namespace std;
const int sze=4e5;
int row[sze];
int col[sze];
int main()
{
    string s;
    int n,q,i,j,mx1=0,mx2=0,x,y;
    cin>>n>>q;
    for(i=0 ; i<q ; i++)
    {
        cin>>s;
        cin>>x>>y;
        if(s=="RowAdd")
        {
            row[x]=row[x]+y;
            if(row[x]>mx1)
                mx1=row[x];

        }
        else
        {
            col[x]=col[x]+y;
            if(col[x]>mx2)
                mx2=col[x];
        }
    }
        cout<<mx1+mx2<<endl;
}
