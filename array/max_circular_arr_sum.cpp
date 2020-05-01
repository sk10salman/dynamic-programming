#include<bits/stdc++.h>
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t>0)
     {
         int n;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
           cin>>arr[i];
        int sum1=arr[0];
         for(int i=0;i<n;i++)
         {
             int sum=arr[i];
             for(int j=i+1;j<=i+n;j++)
             {
                  sum1 = max(sum1,sum);
                  if(sum<0)
                     j=i+n+10;
                  sum +=arr[j%n];
                
             }
         }
         cout<<sum1<<endl;
         t--;
     }
	return 0;
}
