// C++ program to find maximum dot product of two array 
#include<bits/stdc++.h> 
using namespace std; 

// Function compute Maximum Dot Product and 
// return it 
long long int MaxDotProduct(int A[], int B[], 
							int m, int n) 
{ 
	// Create 2D Matrix that stores dot product 
	// dp[i+1][j+1] stores product considering B[0..i] 
	// and A[0...j]. Note that since all m > n, we fill 
	// values in upper diagonal of dp[][] 
	long long int dp[n+1][m+1]; 
	memset(dp, 0, sizeof(dp)); 

	// Traverse through all elements of B[] 
	for (int i=1; i<=n; i++) 

		// Consider all values of A[] with indexes greater 
		// than or equal to i and compute dp[i][j] 
		for (int j=i; j<=m; j++) 

			// Two cases arise 
			// 1) Include A[j] 
			// 2) Exclude A[j] (insert 0 in B[]) 
			dp[i][j] = max((dp[i-1][j-1] + (A[j-1]*B[i-1])) , 
							dp[i][j-1]); 

	// return Maximum Dot Product 
	return dp[n][m] ; 
} 

// Driver program to test above function 
int main() 
{ 
	int A[] = { 2, 1,-2,5} ; 
	int B[] = { 3, 0, -6 } ; 
	int m = sizeof(A)/sizeof(A[0]); 
	int n = sizeof(B)/sizeof(B[0]); 
	cout << MaxDotProduct(A, B, m, n); 
	return 0; 
} 

