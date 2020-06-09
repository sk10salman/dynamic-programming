#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    stack <int> v;
	    v.push(-1);
	    int count=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]=='(')
	        {
	            v.push(i);
	           
	        }
	        else
	           {v.pop();
	                 if (!v.empty()) 
                   count = max(count, i - v.top()); 
                  else v.push(i); 
            // If stack is empty. push current index as  
            // base for next valid substring (if any) 
          
	           }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

/*
Given a string S consisting of opening and closing parenthesis '(' and ')'. Find length of the longest valid parenthesis substring.

Input:
First line contains number of test cases T.  Each test case have one line string S of character '(' and ')' of length  N.

Constraints:
1 <= T <= 500
1 <= N <= 105

Example:
Input:
2
((()
)()())

Output:
2
4

Explanation:
Testcase 1: Longest valid balanced parantheses is () and its length is 2.


*/
