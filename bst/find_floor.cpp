#include <iostream>
using namespace std;
/*
ques:
Given a sorted array arr[] of size N without duplicates, and given a value x. Find the floor of x in given array. Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.
end:

int without_bst(int ar[],int n,int x)
{
    int t=-1;
    for(int i=0;i<n;i++)
      {
          if( ar[i]<=x)
             {
                 t=i;
             }
            else
               break;
      }
      return t;
}*/
int bst(int ar[],int n,int x)
{
    int start=0,end=n-1,ans=-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(ar[mid]<=x)
           {
               ans=mid;
               start=mid+1;
           }
          else if(ar[mid]>x)
            end=mid-1;
    }
    return ans;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int ar[n];
	    for(int i=0;i<n;i++)
	      cin>>ar[i];
	     cout<<bst(ar,n,x)<<endl;
	}
	return 0;
}
