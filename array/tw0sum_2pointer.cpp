class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        int i=0,j=numbers.size()-1;
        while(i<j)
        {
            int x=numbers[i]+numbers[j];
            if(x==target)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            else if(x>target)
                j--;
            else
                i++;
        }
        return v;
    }
};
