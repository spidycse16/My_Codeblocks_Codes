#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,dif;
    string s;
    int tc;
    cin>>tc;
    for(j=0 ; j<tc ; j++)
    {
        cin>>s;
        int sum=0;
        for(i=0 ; i<s.size() ; i++)
        {
            sum=sum+((s[i]-'a')+1);
        }
        if(s.size()==1)
            cout<<"Bob "<<(s[0]-'a')+1<<endl;
        else if(s.size()%2==0)
            cout<<"Alice "<<sum<<endl;
            else
            {
                int first_word,last_word;
                first_word=(s[0]-'a')+1;
                last_word=(s[s.size()-1]-'a')+1;
                int dif1,dif2;
                dif1=(sum-first_word);
                dif2=(sum-last_word);
                if(dif1>dif2)
                    cout<<"Alice "<<dif1-first_word<<endl;
                else
                    cout<<"Alice "<<dif2-last_word<<endl;

                //cout<<first_word<<last_word<<sum<<endl;
            }

    }
}
