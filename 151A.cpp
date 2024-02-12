#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,i,j,x,n,l,k,p,s,d,a,nl,np,c;
    int total_d,total_s,total_salt,res=0;
    vector <int> v;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    total_d=(k*l);
    total_s=(c*d);
    total_salt=p;
    v.push_back(total_d/nl);
    v.push_back(total_s);
    v.push_back(total_salt/np);
    sort(v.begin(),v.end());
    //cout<<v[0]<<"  "<<v[1]<<" "<<v[2]<<endl;
    cout<<v[0]/n<<endl;
}
