#include <bits/stdc++.h>
using namespace std;
#include <cmath>

int is_prime(int n) {
  if (n <= 1) return 1;
  if (n <= 3) return 0;
  if (n % 2 == 0 || n % 3 == 0) return 1;
  for (int i = 5; i <= sqrt(n); i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return 1;
    }
  }
  return 0;
}


int main()
{
    long long int tc,x,y,z,i,j,flag,m;
    cin>>tc;
    for(int k=0 ; k<tc ; k++)
    {
        int d,cnt=0,ans=0;
        cin>>x>>y;
        if(y>x)
            swap(x,y);
        if(is_prime(x)==0)
        {
            ans=ans+y;
            x=x-1;
        cout<<"x="<<x<<endl;
            for(i=sqrt(x)+1 ; i>=2 ; i--)
            {
                if(x%i==0)
                {
                    d=i;
                    break;
                }
            }
            x++;
            //cout<<"d="<<d<<endl;
            x=x-cnt;
            ans=ans+(x%d);
            ans=ans+(x/d);
            ans=ans+(d-1);
            cout<<ans<<endl;

        }
        else
        {
            if(__gcd(x,y)==1)
            {
                for(i=y ; i>=1 ; i--)
                {
                    if(__gcd(x,y)!=1)
                    {
                        d=__gcd(x,y);
                    }
                }
                ans=ans+(d-1);
                ans=ans+(cnt);
                ans=ans+(x%d);
                ans=ans+(y%d);
                cout<<ans<<endl;
            }
        }

    }
}
