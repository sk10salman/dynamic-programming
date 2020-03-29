#include<bits/stdc++.h>
using namespace std;
int lcs(string X,string Y,int n,int m)
{
  int dp[n+1][m+1];
  for(int i=0;i<=m;i++)
    dp[0][i]=0;
  for(int i=0;i<=n;i++)
    dp[i][0]=0;
  for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++)
        {
            if(X[i-1]==Y[j-1])
               dp[i][j] = 1+ dp[i-1][j-1];
             else
               {
                   dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
               }
        }
  return dp[n][m];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       
    string X,Y;
    cin>>X;
    Y =X;
    reverse(X.begin(),X.end());
    
    int a= lcs(X,Y,X.length(),Y.length());
    cout<<a<<endl;
    }
}