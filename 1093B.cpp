#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,n,mx=0,cnt=0;
    cin>>tc;
    for(int k=0 ; k<tc ; k++)
    {
        int even=0,odd=0,cnt=0;
        int arr[30]={0};
        string s;
        cin>>s;
        for(i=0 ;i<s.size() ; i++)
        {
            arr[s[i]-97]++;
            //cout<<s[i]-97<<endl;
        }
        for(i=0 ; i<26 ; i++)
        {
            if(arr[i]>0)
                cnt++;
            if(arr[i]%2==0)
                even++;
            else
                odd++;
        }

        //cout<<"cnt = "<<cnt<<endl;
        string s1;
        s1=s;
        reverse(s1.begin(),s1.end());
        if(cnt==1)
            cout<<"-1"<<endl;
        else if(s1==s)
        {
            //cout<<"s1"<<s1<<endl;
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        else
            cout<<s<<endl;

    }
}



