#include<bits/stdc++.h>
using namespace std;

int knap(int ar[],int sum,int n)
{
    int dp[n+1][sum+1];
    for(int i=1;i<sum+1;i++)
      {
         
           dp[0][i]=INT_MAX-1;
      }
    for(int i=0;i<n+1;i++)
       dp[i][0]=0;
    for(int i=1;i<n+1;i++)
      {
          for(int j=1;j<sum+1;j++)
             {if(ar[i-1]<=j)
            dp[i][j]=min(1 +dp[i][(j-ar[i-1])] ,dp[i-1][j]);
             else
              dp[i][j]=dp[i-1][j];}
      }
  return dp[n][sum];
     
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int sum;
  
    cin>>sum;
    int n;
    
    cin>>n;
    
    int ar[n];
    for(int i=0;i<n;i++)
       cin>>ar[i];
   
   cout<<knap(ar,sum,n)<<endl;
    }
   return 0;
}