#include <iostream>
#include<bits/stdc++.h>
using namespace std;

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
	   int q;
	   cin>>q;
	   while(q--)
	   {
	       int l,r;
	       cin>>l>>r;
	       cout<<accumulate(ar + (l-1), ar + (r), 0)<<" ";
	   }
	   cout<<endl;
	}
	
	return 0;
}
