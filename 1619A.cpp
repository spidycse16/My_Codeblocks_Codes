#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (s.substr(0, n / 2) == s.substr(n / 2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
