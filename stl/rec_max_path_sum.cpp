#include<bits/stdc++.h>
using namespace std;
int ar[100][100];
int solve(int ar[][100],int n,int i,int j)
{
    if(i<0 || j<0)
     return 0;
    return max(ar[i][j],max(ar[i][j]+solve(ar,n,i-1,j),ar[i][j]+solve(ar,n,i,j-1)));
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
         cin>>ar[i][j];
       
   cout<<solve(ar,n,n-1,n-1)<<endl;
}