#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	      priority_queue <int, vector<int>, greater<int> > pq; 
	      int n,k;
	      cin>>k>>n;
	      int ar[n];
	      for(int i=0;i<n;i++)
	        cin>>ar[i];
	        for(int i=0;i<n;i++)
	         {
	             pq.push(ar[i]);
	              if(pq.size()>k)
	                pq.pop();
	               if(pq.size()<k)
	                 cout<<"-1"<<" ";
	                if(pq.size()==k)
	                   cout<<pq.top()<<" ";
	                   
	         }
	         cout<<endl;
	}
	return 0;
}