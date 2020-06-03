#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="HI HOW ARE YOU";
    istringstream ss(s); 
    string w="";
    while(std::getline(ss, w, ' '))
    {
        cout<<w<<endl;
        w +=s;
    }
    return 0;

}