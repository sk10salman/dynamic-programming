class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)
             return nums.size();
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        auto it=mp.begin();
        
        int count=1,c=1;
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->first==it->first+1)     
            { c++;
             it=i;
            }
            else
            {
                c=1;
                it=i;
            }
                count =max(c,count);    
        }
        return count;
        
    }
};


/*
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

Your algorithm should run in O(n) complexity.

Example:

Input: [100, 4, 200, 1, 3, 2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
*/
