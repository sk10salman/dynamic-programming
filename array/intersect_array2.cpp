class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int n=nums1.size(),m=nums2.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[nums1[i]]++;
        for(int j=0;j<m;j++)
        {
            if(mp[nums2[j]]>=1)
            {
                v.push_back(nums2[j]);
                mp[nums2[j]]--;
            }
        }
        return v;
    }
};


/*
Given two arrays, write a function to compute their intersection.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
