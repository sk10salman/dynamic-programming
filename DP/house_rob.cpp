#include <iostream>
using namespace std;
#define ll long long
ll solve(ll ar[],int n)
{
    if(n==1)
       return ar[0];
      if(n==2)
         return max(ar[0],ar[1]);
    ll dp[n];
    dp[0]=ar[0];
    dp[1]=max(ar[0],ar[1]);
    for(int i=2;i<n;i++)
      dp[i]= max(dp[i-1],dp[i-2]+ar[i]);
     return dp[n-1];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll ar[n];
	    for(int i=0;i<n;i++)
	      cin>>ar[i];
	    
	      cout<<solve(ar,n)<<endl;
	      
	}
	return 0;
}
