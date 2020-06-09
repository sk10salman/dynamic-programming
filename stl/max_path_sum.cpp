#include<bits/stdc++.h>
using namespace std;
int ar[100][100];
int solve(int ar[][100],int n)
{
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
       for(int j=1;j<=n;j++)
        dp[i][j]=max(dp[i-1][j],max(dp[i][j],dp[i][j-1]))+ar[i-1][j-1];

    return dp[n][n];
}
int main()
{
    int n;
    cin>>n;
   
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
         cin>>ar[i][j];
   cout<<solve(ar,n)<<endl;
}