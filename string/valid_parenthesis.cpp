class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                a.push(s[i]);
            else if(s[i]==')')
            {
                if(a.size()==0)
                    return false;
                if(a.top()=='(' && a.size()>0)
                    a.pop();
                else
                    return false;
            }
             else if(s[i]=='}')
            {
                 if(a.size()==0)
                    return false;
                if(a.top()=='{' && a.size()>0)
                    a.pop();
                else
                    return false;
            }
             else if(s[i]==']')
            {
                 if(a.size()==0)
                    return false;
                if(a.size()>0 && a.top()=='[')
                    a.pop();
                else
                    return false;
            }
        }
        if(a.size()==0)
            return true;
        return false;
    }
};




/*
Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true
*/
