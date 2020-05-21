class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z' || (s[i]>='0' && s[i]<='9'))
                a+= s[i];
            else if(s[i]>='A' && s[i]<='Z')
                a += (s[i]-'A'+'a');
            
        }
        string b=a;
        reverse(a.begin(),a.end());
        return a==b;
    }
};

/*

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
