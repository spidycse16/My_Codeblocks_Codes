//Noobs skeleton code//

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define slen s.size()
#define vlen v.size()
#define pb push_back
#define el endl
ll tc,x,y,n,i,j,k,d,m,z,cnt,ans,res,flag,ma;
char ch;
ll mi=numeric_limits<ll>::max();
string s,str;
vector <ll> v;
map<ll,ll> mp;
set <ll> st;
int main()
{
    cin>>tc;
    for(z=0 ; z<tc ; z++)
    {

    }
}


//string

string str = "Hello World";
str.erase(6, 5); // Erase 5 characters starting from index 6
cout << str << std::endl; // Output: "Hello"

std::string str = "Hello World";
str.erase(6, 5).append("Universe"); // Erase 5 characters starting from index 6, and append "Universe" to the end of the string
std::cout << str << std::endl; // Output: "Hello Universe"

std::string str = "The quick brown fox jumps over the lazy dog";

if (str.find("quick") != std::string::npos)
{
    // substring found
    std::cout << "Substring found!" << std::endl;
}
else
{
    // substring not found
    std::cout << "Substring not found." << std::endl;
}

