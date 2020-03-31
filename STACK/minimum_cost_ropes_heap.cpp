#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	long long t;
	cin>>t;
	while(t--)
	{
	    priority_queue<long long,vector<long long>,greater<long long>> mn;
	    long long n;
	    cin>>n;
	    long long arr[n];
	    for(long long i=0;i<n;i++)
	     { cin>>arr[i];
	        mn.push(arr[i]);
	     }
	     long long cost=0;
	     while(mn.size()>=2)
	     {
	         long long f=mn.top();
	         mn.pop();
	         long long s=mn.top();
	         mn.pop();
	         cost +=f+s;
	         mn.push(f+s);
	     }
	     cout<<cost<<endl;
	}
	return 0;
}