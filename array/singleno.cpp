int singleNumber(vector<int>& nums) {
        map<int ,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second==1)
                return i->first;
        }
        return -1;
    }

/*
Input: [4,1,2,1,2]
Output: 4
*/
