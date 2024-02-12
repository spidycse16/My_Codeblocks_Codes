#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bin[5][5];
    int i,j,tc,x,temp=0,flag=0,cols=0;
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cin>>bin[i][j];
        }
    }
    cin>>x;
    for(i=0 ; i<x; i++)
    {
        cin>>tc;
        for(j=0 ; j<3 ; j++)
        {
            for(int k=0 ; k<3 ; k++)
            {
                if(bin[j][k]==tc)
                    bin[j][k]=300;
            }
        }
    }
     for(int i = 0 ; i<3 ; i++){
        if(bin[i][0]==bin[i][1] && bin[i][1]==bin[i][2])temp++;
        if(bin[0][i]==bin[1][i] && bin[1][i]==bin[2][i])temp++;
    }
    if(bin[0][0]==bin[1][1] && bin[1][1]==bin[2][2])
        temp++;
    if(bin[2][0]==bin[1][1] &&  bin[1][1]==bin[0][2])
        temp++;
    if(temp>0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
