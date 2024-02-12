#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,x,y,n,j,i;
    cin>>tc;
    for(i=0 ; i<tc ; i++)
    {
        int arr[20]= {0};
        int flag=0,flag2=0;
        cin>>n;
        for(j=0 ; j<4 ; j++)
        {
            int temp;
            temp=n%10;
            arr[temp]++;
            n=n/10;
        }
        for(j=0 ; j<10 ; j++)
        {
            if(arr[j]>0)
            {
                if(arr[j]==1 || arr[j]==3)
                    flag2++;
                flag++;
            }
        }
        if(flag==1)
            cout<<"-1"<<endl;
        else if(flag==2 && flag2>0)
            cout<<"6"<<endl;
        else
            cout<<"4"<<endl;
    }
}
