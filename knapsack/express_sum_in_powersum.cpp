#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int knap(vector<int>arr,int n,int sum)
{
    int dp[n+1][sum+1];
    for(int j=1;j<=sum;j++)
      dp[0][j]=0;
      for(int i=0;i<=n;i++)
         dp[i][0]=1;
         
        for(int i=1;i<=n;i++)
          for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                 dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
                 else
                  dp[i][j]=dp[i-1][j];
            }
            return dp[n][sum];
    
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int x,n;
	    cin>>x>>n;
	    vector<int>v;
	    for(int i=1;pow(i,n)<=x;i++)
	       v.push_back(pow(i,n));
	       
	    cout<<knap(v,v.size(),x)<<endl;
	  
	}
	return 0;
}
