#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc,i,j,k;
    cin>>tc;
    for(int i=0 ; i<tc ; i++)
    {
        int n,max=0;
        cin>>n;
        for(j=1 ; j<=n ; j++)
        {
            for(k=j+1 ; k<=n ; k++)
            {
                int temp=__gcd(j,k);
                if(temp>max)
                max=temp;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}
