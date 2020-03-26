#include<bits/stdc++.h>
using namespace std;

int lcs(string X,string Y,int n,int m)
{
  int dp[n+1][m+1];
  for(int i=0;i<=m;i++)
    dp[0][i]=0;
  for(int i=0;i<=n;i++)
    dp[i][0]=0;
    int mx = 0;
  for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++)
        {
            if(X[i-1]==Y[j-1])
            {
                
               dp[i][j] = 1+ dp[i-1][j-1];
               mx =max(mx,dp[i][j]);
            }
             else
               {
                   dp[i][j] = 0;
               }
        }
    return mx;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
    string X,Y;
    cin>>X>>Y;
    cout<<lcs(X,Y,X.length(),Y.length())<<endl;
    }
}