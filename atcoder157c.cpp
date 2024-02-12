#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n, m; cin >> n >> m;


   map<int, int> mp;
   int flag = 0;

   for(int i = 1;i <= m; i++){
      int a, b; cin >> a >> b;
      mp[a] = min(mp[a])
   }

   if(flag){
    cout <<-1 << endl;
    return 0;
   }

   string s;
   for(int i = 1;i <= n; i++){
      if(mp[i].size()== 0){
        if(i == 1) s += '1';
        else s += '0';
      }
      else{
        set<int> temp = mp[i];
        auto it = temp.begin();
        int tt = *it;
        char ch = tt + '0';
        s += ch;
      }
   }
   if(s[0] == '0' and n > 1)cout << -1 << endl;
   else cout << s << endl;




  return 0;
}
