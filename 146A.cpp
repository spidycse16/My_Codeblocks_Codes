#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,flag=0,first4=0,first7=0,sec4=0,sec7=0,x;
    string s,s1;
    cin>>s;
    cin>>s1;
    //cout<<s1<<endl;
    for(i=0 ; i<s1.size() ; i++)
    {
        if(s1[i]!='4' || s1[i]!='7')
        {
            cout<<"check"<<endl;
            flag=1;

            break;
        }
        else
        {
            if(i<(s1.size()/2))
            {
                if(s1[i]=='4')
                    first4++;
                else
                    first7++;
            }
            else
            {
                if(s1[i]=='4')
                    sec4++;
                else
                    sec7++;
            }

        }

    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
    {
    if(first4==sec4 && first7==sec7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    }

}

