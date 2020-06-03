#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string: ";
    cin>>s;
    sort(s.begin(),s.end());
    while(std::next_permutation(s.begin(),s.end()))
    {
        cout<<s<<endl;
    }
    return 0;
}