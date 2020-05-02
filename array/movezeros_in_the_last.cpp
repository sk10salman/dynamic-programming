void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==0)
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]!=0)
                {
                    int t= nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                    j=nums.size();
                }
            }
        }
    }


/*

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

*/
