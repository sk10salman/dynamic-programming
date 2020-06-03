class Solution {
public:
    bool f(char s)
    {
       
       
            if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
                return true;
        
        return false;
    }
    int maxVowels(string s, int k) {
        int c=0,count=0;
      for(int i=0;i<k;i++)
          if(f(s[i]))
              count++;
        c= max(c,count);
      
        for(int i=k;i<s.length();i++)
        {
           if(f(s[i-k]))
               count--;
            if(f(s[i]))
                count++;
            c= max(c,count);
        }
        return c;
    }
};


/*
Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.
