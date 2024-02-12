#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int b[10];
int main()
{
    int i,j,x,y,c1,c2,m,n;
    int row,col,temp=0;
    vector <int> v;
    vector <int> v1;
    cin>>row>>col;
    for(i=1  ; i<=row ; i++)
    {
        for(j=1 ; j<=col ; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                temp++;
                v.push_back(i);
                v.push_back(j);
                if(temp==2)
                {
                    b[0]=v[0];
                    b[1]=v[1];
                    b[2]=i;
                    b[3]=j;
                    v.clear();
                }

            }
        }
        if(temp==1)
            {
                c1=v[0];
                c2=v[1];
                v.clear();
            }
    temp=0;
    }
    x=abs(b[1]-b[3]);
    if(c2==b[1])
        c2=c2+x;
    else
        c2=c2-x;
    cout<<c1<<" "<<c2<<endl;

}
