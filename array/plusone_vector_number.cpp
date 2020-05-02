vector<int> plusOne(vector<int>& digits) {
        int c=1;
        vector<int> v;
        for(int i=digits.size()-1;i>=0;i--)
        {
            int x = c+digits[i];
            if(x>=10)
            {
                x -=10;
                c=1;
            }
            else
                c=0;
            v.push_back(x);
                
        }
        if(c==1)
            v.push_back(c);
        reverse(v.begin(),v.end());
        return v;
        
    }

/*

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.

*/
