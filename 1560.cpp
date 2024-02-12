#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,tc,i,j,people;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int x=0;
        cin>>a>>b>>c;
        people=abs(a-b)*2;
        if(people>2)
        {
            if(c<=people)
            {
                if(c>people/2)
                    c-=(people/2);
                else
                    c+=(people/2);
                    cout<<c<<endl;
            }
            else
                cout<<"-1"<<endl;
        }
    }
}
