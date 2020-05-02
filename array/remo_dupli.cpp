class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        nums.clear();
        for(auto i=mp.begin();i!=mp.end();i++)
             nums.push_back(i->first);
        return nums.size();
    }
};
