class Solution {
public:
    int titleToNumber(string s) {
        int c=0;
        for(int i=0;i<s.length();i++)
            c = c*26+(s[i]-'A'+1);
        return c;
        
    }
};

/*
Example 1:

Input: "A"
Output: 1
Example 2:

Input: "AB"
Output: 28
Example 3:

Input: "ZY"
Output: 701
*/
