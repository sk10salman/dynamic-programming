class Solution {
public:
    int solve(int n,vector<int>& dp)
    {
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        dp[n]=0;
        for(int i=0;i<n;i++)
        {
            dp[n]+=(solve(i,dp)*solve(n-1-i,dp));
        }
        return dp[n];
    }

    int numTrees(int n) {
      vector<int>dp(n+1,-1);
      //  memset(dp,-1,sizeof(dp));
        dp[0]=1;
        return solve(n,dp);
    }
};

