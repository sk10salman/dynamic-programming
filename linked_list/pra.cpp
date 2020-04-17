#include<bits/stdc++.h>
using namespace std;
string f(string s)
{
     return (s.begin() + 2,s + 6);
}
int main()
{
    string s;
    cin>>s;
    cout<<f(s)<<endl;
}