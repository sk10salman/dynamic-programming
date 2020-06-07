class Solution {
public:
    int knap(vector<int> arr,int n,int sum)
    {
       vector<int>dp(sum+1,INT_MAX-1);
        dp[0]=0;
        for(int i=1;i<=sum;i++)
            for(int j=0;j<n;j++)
                if(i>=arr[j])
                dp[i]=min(dp[i],dp[i-arr[j]]+1);
        return dp[sum];
    }
    int numSquares(int n) {
        
        vector<int>coins;
        for(int i=1;i<=sqrt(n);i++)
             coins.push_back(i*i);
        
        int sum=n;
        return knap(coins,coins.size(),sum);
    }
};


/*

Given a positive integer n, find the least number of perfect square numbers (for example, 1, 4, 9, 16, ...) which sum to n.

Example 1:

Input: n = 12
Output: 3 
Explanation: 12 = 4 + 4 + 4.
Example 2:

Input: n = 13
Output: 2
Explanation: 13 = 4 + 9.

*
/
