#include<bits./stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,num,cnt=0,temp;
    vector <int> x;
    //vector <int> y;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        cnt=0;
        cin>>num;
        temp=num;
        while(num>0)
        {
            x.push_back(num%10);
            num=num/10;
        }
        /*for(j=0 ; j<x.size() ; j++)
        {
            cout<<x[j]<<endl;
        }*/
        //cout<<"len"<<x.size()<<endl;
        if(temp%2==0)
        {
            cout<<"0"<<endl;
        }
        else if(x.size()==1)
            cout<<"-1"<<endl;
        else
        {
            for(j=x.size()-1 ; j>=0 ; j--)
            {
                if(x[j]%2==0)
                {
                    //cout<<"x[j]="<<x[j]<<endl;
                    //cout<<"break"<<endl;
                    break;
                }
                cnt++;
            }
            //cout<<"cnt = "<<cnt<<endl;
            if(cnt==0)
                cout<<"1"<<endl;
            else if(x.size()==cnt)
                cout<<"-1"<<endl;
            else if(cnt>1)
                cout<<"2"<<endl;
        }

        x.clear();
    }
}
