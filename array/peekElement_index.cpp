class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        priority_queue<pair<int,int>>p;
        for(int i=0;i<nums.size();i++)
        {
            p.push({nums[i],i});
        }
        return p.top().second;
    }
};
