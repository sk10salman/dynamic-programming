class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerset{{}};
        subsetsCascade(nums, powerset);
        return powerset;
    }
private:
    void subsetsCascade(vector<int>& nums, vector<vector<int>>& ps)
    {
        for(auto n : nums) {
            int setCount = ps.size();
            for(int i=0;i<setCount;i++) {
                ps.push_back(ps[i]);
                ps.back().push_back(n);
            }
        }
    }
};


/*
Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
*/
