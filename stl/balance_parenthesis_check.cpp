#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    stack <char> s;
	    string str;
	    cin>>str;
	    s.push('a');
	    s.push(str[0]);
	    for(int i=1;i<str.length();i++)
	    {
	        if(s.top()=='{' && str[i]=='}')
	          {
	              s.pop();
	          }
	         else if(s.top()=='(' && str[i]==')')
	          {
	              s.pop();
	          }
	          else if(s.top()=='[' && str[i]==']')
	          {
	              s.pop();
	          }
	          else
	             s.push(str[i]);
	    }
	    s.pop();
	    if(s.empty())
	        cout<<"balanced"<<endl;
	    else
	        cout<<"not balanced"<<endl;
	   t--;
	}
	return 0;
}
