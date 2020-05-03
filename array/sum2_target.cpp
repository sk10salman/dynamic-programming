vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>v;
        int n= nums.size();
       
        for(int i=0;i<n-1;i++)
        {
            int x=target-nums[i];
            for(int j=i+1;j<n;j++)
            {
                if(x==nums[j])
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }

/*
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
