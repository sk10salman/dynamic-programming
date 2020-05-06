class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
vector<vector<string>> result;
int n=s.size();
if(n==0)
return {};

    map<string,vector<string> >  m;
   for(int i=0;i<n;i++)
   {
     string s1=s[i];
     sort(s1.begin(),s1.end());                
     m[s1].push_back(s[i]);
     
   }
   map<string,vector<string> >:: iterator itr;
  for(itr=m.begin();itr!=m.end();itr++)
  {
    result.push_back(itr->second);
  }
  
  return result;
}
};

/*
Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

All inputs will be in lowercase.
The order of your output does not matter.
*/
