#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long  n;
	    cin>>n;
	    unordered_map<ll,ll>m;
	     ll count=0;
	    int sum=0;
	     ll  arr[n];
	     for(ll i=0;i<n;i++)
	       cin>>arr[i];
	        m[sum]++;
	    for(ll i=0;i<n;i++)
	    {
	       
	      
	         
	        sum += arr[i];
	        
	        if(m[sum]>=1)
	           {
	               count += m[sum];
	               
	           }
	            m[sum]++;
	      
	           
	    }
	    cout<<count<<endl;
	}
	return 0;
}


/*
2
6
0 0 5 5 0 0
10
6  -1 -3 4 -2 2 4 6 -12 -7
Output:
6
4
*/
