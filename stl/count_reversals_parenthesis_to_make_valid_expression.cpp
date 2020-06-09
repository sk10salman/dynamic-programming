#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(string str)
{
    if(str.length()%2!=0)
       return -1;
    stack<char>s;
    s.push('a');
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='}')
        {
            if(s.top()=='{')
              s.pop();
             else
               s.push('}');
        }
        else
          s.push('{');
    }
    int a=0,b=0;
    while(!s.empty())
    {
        if(s.top()=='{')
          a++;
        if(s.top()=='}')
          b++;
          s.pop();
    }
    return (a/2+a%2)+(b/2+b%2);
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    cout<<solve(s)<<endl;
	}
	return 0;
}

/*
The first line of input contains an integer T, denoting the number of test cases. Then T test cases
follow. The first line of each test case contains a string S consisting only of { and }.

Output
Print out minimum reversals required to make S balanced. If it cannot be balanced, then print -1.

Constraints
1 <= T <= 100
0 <= |S| <= 50

Examples
Input
4
}{{}}{{{
{{}}}}
{{}{{{}{{}}{{
{{{{}}}}

Output
3
1
-1
0

Explanation:
Testcase 1: For the given string }{{}}{{{ since the length is even we just need to count the number of openning brackets('{') suppose denoted by 'm' and closing brackest('}') suppose dentoed by 'n' after removing highlighted ones. After counting compute ceil(m/2) + ceil(n/2).

*/
