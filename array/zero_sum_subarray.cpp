#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    map<int,int>m;
	   
	    int sum=0;
	    bool accept=false;
	    for(int i=0;i<n;i++)
	    {
	        m[sum]++;
	        int x;
	        cin>>x;
	        sum += x;
	        if(m[sum]>=1)
	           {
	               accept=true;
	           }
	           
	           
	    }
	    if(accept)
	      cout<<"Yes"<<endl;
	      else
	      cout<<"No"<<endl;
	}
	return 0;
}
