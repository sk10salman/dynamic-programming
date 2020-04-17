#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int e,int f)
{
   int dp[e+1][f+1]={0};
   for(int i=0;i<=e;i++)
      for(int j=0;j<=f;j++)
          if(i==0 && j==0)
            dp[i][j]=0;

  for(int i=1;i<=e;i++)
      for(int j=1;j<=f;j++)
         {
             dp[i][j] = max(dp[i-1][j-1]+1,1+ dp[i][f-j]);

         }
         return dp[e][f];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int e,f;
	    cin>>e>>f;
	    cout<<solve(e,f)<<endl;
	}
	return 0;
}