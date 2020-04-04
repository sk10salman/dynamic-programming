#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int knap(int wt[],int vt[],int w,int n)
{
 int dp[n+1][w+1];
   
          for(int i=0;i<=n;i++)
            { for(int j=0;j<=w;j++)
               {
				   if(i==0||j==0)
				      dp[i][j]=0;
                 else  if(wt[i-1]<=j)
                   {
                      dp[i][j]=max(vt[i-1] +  dp[i-1][(j-wt[i-1])]    ,  dp[i-1][j]);
                   }
                    else
                      dp[i][j]=dp[i-1][j];
               }
			}
               return dp[n][w];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n,w;
	    cin>>n;
	    cin>>w;
	
	    int wt[n],vt[n];
	    for(int i=0;i<n;i++)
	       cin>>wt[i];
	     for(int i=0;i<n;i++)
	       cin>>vt[i];
	       cout<<knap(wt,vt,w,n)<<endl;
	}
	return 0;
}