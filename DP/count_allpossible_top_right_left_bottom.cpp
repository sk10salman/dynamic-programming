#include <iostream>
long long mi=1000000007;
using namespace std;
long long dp[100][100];
void solve()
{
    for(int i=0;i<100;i++)
     {  dp[i][0]=1;
        dp[0][i]=1;
     } 
     for(int i=1;i<100;i++)
        for(int j=1;j<100;j++)
           dp[i][j]= (dp[i-1][j]+dp[i][j-1])%mi;
          
     
}
int main() {
	//code
	int t;
	cin>>t;
	solve();
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	  cout<<dp[n-1][m-1]%mi<<endl;
	}
        
	return 0;
}
