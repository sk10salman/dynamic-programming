#include<bits/stdc++.h>
using namespace std;
int knap(int ar[],int sum,int n)
{
    int dp[n+1][sum+1];
    for(int i=0;i<sum+1;i++)
       dp[0][i]=0;
    for(int i=0;i<n+1;i++)
       dp[i][0]=1;
    for(int i=1;i<n+1;i++)
      {
          for(int j=1;j<sum+1;j++)
             {if(ar[i-1]<=j)
            dp[i][j] = (dp[i][j-ar[i-1]]+dp[i-1][j]);
             else
              dp[i][j]=dp[i-1][j];}
      }
      return dp[n][sum];
}
int main()
{
    int n;
    cout<<"enter size of array \n";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
       cin>>ar[i];
    int sum;
    cout<<"enter the sum\n";
    cin>>sum;
   cout<<"\ncount = "<<knap(ar,sum,n)<<endl;
   return 0;
}