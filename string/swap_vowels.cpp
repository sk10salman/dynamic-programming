class Solution {
public:
    bool vo(char c)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u' || c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
     
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(vo(s[i]) && vo(s[j]))
            {
                char c=s[i];
                s[i]=s[j];
                s[j]=c;
                i++;j--;
            }
            else if(vo(s[i])==false && vo(s[j])==false)
            {
                i++;j--;
            }
            else if(vo(s[i]) && vo(s[j])==false)
            {
                j--;
            }
            else
                i++;
        }
        return s;
    }
};


/*

Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:

Input: "hello"
Output: "holle"
Example 2:

Input: "leetcode"
Output: "leotcede"


