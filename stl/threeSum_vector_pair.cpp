class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
       if(arr.size()==0)
           return {};
        vector<vector<int>>v;
      sort(arr.begin(),arr.end());
        int n=arr.size();
        set<vector<int>>s;
    for(int i=0;i<n-2;i++)
     {
         int k=i+1;
         int j=n-1;
        
        while(k<j)
    {
        int m= arr[i]+arr[j]+arr[k];
        if(m==0)
        {
            s.insert(vector<int>{arr[i],arr[k],arr[j]});
            k++;
            j--;
        }
        else if(m<0)
           k++;
          else
           j--;
    }
     }
     for(auto i=s.begin();i!=s.end();i++)
         v.push_back(*i);
 
        return v;
    }
};



/*


Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

*/
