#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
int solve(ll a[],ll n,ll sum)
{
    if(n==1)
      return 1;
     int s=a[0];
     for(int i=1;i<n;i++)
      {
          if(sum-s-a[i]==s)
             return i+1;
          s += a[i];
      }
      return -1;
}
int main() {
	//code
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum +=a[i];
        }
        cout<<solve(a,n,sum)<<endl;
        
    }
	return 0;
}
