class Solution {
public:
    bool backspaceCompare(string S, string T) {
        vector<char>s1,s2;
        for(int i=0;i<S.length();i++)
        {
        
            if(S[i]=='#')
            {
                if(s1.size()>=1)
                s1.pop_back();
            }
            else
            {
                s1.push_back(S[i]);
            }
        }
        for(int i=0;i<T.length();i++)
        {
        
            if(T[i]=='#')
            {
                 if(s2.size()>=1)
                s2.pop_back();
            }
            else
            {
                s2.push_back(T[i]);
            }
        }
        if(s1==s2)
            return true;
        return false;
    }
};



/*
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".
Example 2:

Input: S = "ab##", T = "c#d#"
Output: true
Explanation: Both S and T become "".
Example 3:

Input: S = "a##c", T = "#a#c"
Output: true
Explanation: Both S and T become "c".
Example 4:

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".

*/
