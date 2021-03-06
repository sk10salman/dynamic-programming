#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int lis( int arr[], int n )  
{  
    int lis[n]; 
   
    lis[0] = arr[0];    
  
    /* Compute optimized LIS values in bottom up manner */
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = arr[i]; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + arr[i])  
                lis[i] = lis[j] + arr[i];  
    } 
  
    // Return maximum value in lis[] 
    return *max_element(lis, lis+n); 
}  
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar[n];
	    for(int i=0;i<n;i++)
	       cin>>ar[i];
	       cout<<lis(ar,n)<<endl;
	}
	return 0;
}