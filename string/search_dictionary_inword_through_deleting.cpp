class Solution {
public:
   
    string findLongestWord(string s, vector<string>& d) {
        int mn=0;
        string a="";
        sort(d.begin(),d.end());
        for(int i=0;i<d.size();i++)
        {
           int k=0,j=0;
            while(k<s.length() && j<d[i].length())
            {
                if(s[k]==d[i][j])
                {
                    k++;
                    j++;
                }
                else
                    k++;
            }
            if(j==d[i].length() && mn<d[i].length())
            {
                a= d[i];
                mn=d[i].length();
            }
        }
        return a;
    }
};


/*
Given a string and a string dictionary, find the longest string in the dictionary that can be formed by deleting some characters of the given string. If there are more than one possible results, return the longest word with the smallest lexicographical order. If there is no possible result, return the empty string.

Example 1:
Input:
s = "abpcplea", d = ["ale","apple","monkey","plea"]

Output: 
"apple"
Example 2:
Input:
s = "abpcplea", d = ["a","b","c"]

Output: 
"a"
