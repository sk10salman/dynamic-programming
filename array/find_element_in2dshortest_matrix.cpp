class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        if(nums.size()==0 || nums[0].size()==0)
            return false;
        
        int n=nums.size(),m=nums[0].size();
        
        int i=0,j=m-1;
        while(i<n && j>=0)
        {
            if(nums[i][j]==target)
                return true;
       
             if(nums[i][j]>target)
                j--;
             
            else 
                i++;
        }
        return false;
    }
};

/*
Example:

Consider the following matrix:

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
Given target = 5, return true.

Given target = 20, return false.
*/
