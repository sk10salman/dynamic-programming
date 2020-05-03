 int maxSubArray(vector<int>& nums) {
        
        int s=0,s1=nums[0];
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
           s += nums[i];
              s1 = max(s1,s);
            if(s<0)
                s=0;
        }
        return s1;
    }

/*kadane aproach
 Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/
