class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
       int n=1;
     for(auto i=mp.begin();i!=mp.end();i++)
     {
         if(i->first>0)
         {
             if(i->first!=n)
                 return n;
             else
                 n++;
                 
         }
     }
        return n;
    }
  
};


/*

Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3
Example 2:

Input: [3,4,-1,1]
Output: 2
Example 3:

Input: [7,8,9,11,12]
Output: 1

*/

