#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
   	     int sum=arr[0];
	     int x=0;
	     for(int i=0;i<n;i++)
	     {
	         x += arr[i];
	         sum = max(sum,x);
	         if(x<0)
	           x=0;
	              
	           
	         
	          
	     }
	     cout<<sum<<endl;
	     t--;
	}
	return 0;
}
