#include<bits/stdc++.h>
using namespace std;
void lcs(string X,string Y,int n,int m)
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
   int i=n,j=m;
   string s="";
   while(i>0 && j>0)
     {
         if(X[i-1]==Y[j-1])
           {
               s +=X[i-1];
               i -=1;
               j -=1;
           }
         else
          {
              if(dp[i-1][j]>=dp[i][j-1])
                 {
                     i -=1;
                 }
                else
                  {
                      j -=1;
                  }
          }
     }
     for(int k=s.length()-1;k>=0;k--)
        cout<<s[k];
    cout<<endl;
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
    lcs(X,Y,X.length(),Y.length());
    }
}