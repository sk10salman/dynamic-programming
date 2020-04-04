#include<bits/stdc++.h>
using namespace std;
int knap(int ar[],int sum,int n,int m)
{
    
    int dp[n+1][sum+1];
    for(int i=0;i<n+1;i++)
       
    for(int j=0;j<sum+1;j++)
     {
         if(i==0)
           dp[i][j]=0;
         if(j==0)
           dp[i][j]=1;
     }
      
    
    for(int i=1;i<=n;i++)
      {
          
          for(int j=1;j<=sum;j++)
             {if(ar[i-1]<=j)
            dp[i][j] = (dp[i-1][j-ar[i-1]]+dp[i-1][j]);
             else
              dp[i][j]=dp[i-1][j];
               if(dp[i][j]%m==0)
                 return 1;
             }
            
      }
 
    
       return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
  
    cin>>n>>m;
   
    if(n==0)
     cout<<"0"<<endl;
     else
     {
    int ar[n];
  
    for(int i=0;i<n;i++)
       cin>>ar[i];
       int sum=0;
    for(int i=0;i<n;i++)
      sum += ar[i];
   cout<<knap(ar,sum,n,m)<<endl;}}
}