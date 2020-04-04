#include<bits/stdc++.h>
using namespace std;
int knap(int ar[],int sum,int n)
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
            dp[i][j] = (dp[i-1][j-ar[i-1]]||dp[i-1][j]);
             else
              dp[i][j]=dp[i-1][j];}
      }
      return dp[n][sum];
}
int main()
{
    int n;
    cout<<"enter size of array \n and elementst";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
       cin>>ar[i];
    int sum;
    cout<<"enter the sum\n";
    cin>>sum;
    if(knap(ar,sum,n)==1)
       cout<<"true"<<endl;
    else
       cout<<"false";
}