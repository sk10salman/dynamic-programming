#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//arr size of n (even) given values there are two member 
//who take value first or last element and then values are permamently deleted them count maximum sum if you go first

int dp[1001][1001];
int count_min(int c[],int start,int end,int n){
if(start>end)return 0;
if(dp[start][end]!=-1)return dp[start][end];
int a = c[start]+min(count_min(c,start+2,end,n),count_min(c,start+1,end-1,n));
int b = c[end]+min(count_min(c,start,end-2,n),count_min(c,start+1,end-1,n));
dp[start][end]=max(a,b);
return dp[start][end];
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	 {
	     int n;
	     cin>>n;
	     int arr[n];
	     for(int i=0;i<n;i++)
	        cin>>arr[i];
	    memset(dp,-1,sizeof(dp));
	   cout<<count_min(arr,0,n-1,n)<<endl;
	 }
	return 0;
}