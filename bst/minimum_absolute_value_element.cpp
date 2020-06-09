#include<bits/stdc++.h>
using namespace std;
int solve(int ar[],int start,int end,int target)
{
     int ans=-1;
     while(start<=end)
     {
         int mid=(start+end)/2;
         if(ar[mid]==target)
            return ar[mid];
        else if(ar[mid]>target)
           end=mid-1;
        else
        {
            start=mid+1;
        }
        
     }
     return (abs(ar[start]-target)<abs(ar[end]-target)?ar[start]:ar[end]);
}

int main()
{
    int n,k;
    cout<<"enter size and target :";
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
     cin>>ar[i];
     cout<<solve(ar,0,n-1,k);
}