#include<bits/stdc++.h>
using namespace std;
int knap(int ar[],int sum,int n,int diff)
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
              dp[i][j]=dp[i-1][j];}
      }
     vector<int> v;
     for(int i=0;i<sum+1;i++)
       {
           if(dp[n][i]>=1)
             v.push_back(i);
       }
       int count= 0;
       for(int i=0;i<v.size();i++)
       {
           if(v[i]==(sum+diff)/2)
             count += dp[n][i];
       }
       return count;
}
int main()
{
    int n;
    cout<<"enter size of array \n and element\n";
    cin>>n;
   
    int ar[n];

    for(int i=0;i<n;i++)
       cin>>ar[i];
       int sum=0;
    for(int i=0;i<n;i++)
      sum += ar[i];
       int diff;
    cin>>diff;
   cout<<knap(ar,sum,n,diff);
}