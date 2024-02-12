#include<bits/stdc++.h>
using namespace std;

string LCSubstr(string x, string y)
{
    int m = x.length(), n=y.length();

    int LCSuff[m+5][n+5];

    for(int j=0; j<=n; j++)
        LCSuff[0][j] = 0;
    for(int i=0; i<=m; i++)
        LCSuff[i][0] = 0;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(x[i-1] == y[j-1])
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
            else
                LCSuff[i][j] = 0;
        }
    }

    string longest = "";
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(LCSuff[i][j] > longest.length())
                longest = x.substr((i-LCSuff[i][j]+1) -1, LCSuff[i][j]);
        }
    }
    return longest;
}
int main()
{
    int tc,x,i,j,k;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        string a,b,sub,str;
        int a_start,a_end,b_start,b_end,len;
        cin>>a>>b;
        sub=LCSubstr(a,b);
        if(a==b)
        {
            cout<<"YES"<<endl;
            cout<<a<<endl;
        }
        else if(sub.size()==0)
            cout<<"NO"<<endl;
        else
        {
            a_start = a.find(sub);
            b_start=b.find(sub);
            a_end=a_start+sub.size()-1;
            b_end=b_start+sub.size()-1;
            if(a_start==0 && b_start==0)
            {
                str=sub;
                str=str+"*";
                len=1;
            }
            else if(a_end==a.size()-1 && b_end==b.size()-1)
            {
                str="*";
                str=str+sub;
                len=1;
            }
            else
            {
                str="*";
                str=str+sub;
                str=str+"*";
                len=2;

            }
            if(sub.length()>=len)
            {
                cout<<"YES"<<endl;
                cout<<str<<endl;
            }
            else
                cout<<"NO"<<endl;

        }
    }
}




