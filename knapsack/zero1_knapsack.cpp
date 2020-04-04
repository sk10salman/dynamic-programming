#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[10000][10000];
int knap(int wt[],int vt[],int w,int n)
{
    if(n==0|| w==0)
       return 0;
      if(dp[n][w]!=-1)
         return dp[n][w];
     if(wt[n-1]<=w)
       {
          return dp[n][w]= max((vt[n-1]+knap(wt,vt,w-wt[n-1],n-1)),knap(wt,vt,w,n-1));
       }
      else if(wt[n-1]>w)
         return  dp[n][w]= (knap(wt,vt,w,n-1));
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n,w;
	    cin>>n>>w;
	   
	    memset(dp,-1,sizeof(dp));
	    int wt[n],vt[n];
	    for(int i=0;i<n;i++)
	       cin>>wt[i];
	     for(int i=0;i<n;i++)
	       cin>>vt[i];
	       cout<<knap(wt,vt,w,n)<<endl;
	}
	return 0;
}
