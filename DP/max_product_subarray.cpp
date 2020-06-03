class Solution {
public:
    int maxProduct(vector<int>& nums) {
      vector<int> dp1=nums;
		vector<int> dp2=nums;
		int ans=nums[0];
		for(int i=1;i<nums.size();i++)
		{
			ans=max({ans,nums[i],nums[i]*dp1[i-1],nums[i]*dp2[i-1]});
			dp1[i]=max({dp2[i-1]*nums[i],nums[i],dp1[i-1]*nums[i]});
			dp2[i]=min({dp2[i-1]*nums[i],nums[i],dp1[i-1]*nums[i]});
		}
		return ans;
    }
};


/*
Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

Example 1:

Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.
