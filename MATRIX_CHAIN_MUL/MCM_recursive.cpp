#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int ar[],int i,int j)
{
    if(i>=j)
      return 0;
      int mn = INT_MAX;
      for(int k=i;k<=j-1;k++)
      {
          int temp = solve(ar,i,k) + solve(ar,k+1,j)+ar[i-1]*ar[k]*ar[j];
          mn = min(mn,temp);
      }
      return mn;
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
	    {
	        cin>>ar[i];
	    }
	    cout<<solve(ar,1,n-1)<<endl;
	}
	return 0;
}