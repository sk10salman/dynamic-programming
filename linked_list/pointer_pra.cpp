#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p;int n;
    cin>>n;
    p = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
      p[i]=i;
      for(int i=0;i<n;i++)
       cout<<p[i]<<" ";

       int **pt;
       pt = (int**)malloc((n*n)*sizeof(int));
       for(int i=0;i<n;i++)
          pt[i] = (int *)malloc(n*n*sizeof(int));
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
          pt[i][j]=i+j;
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
          cout<<pt[i][j]<<" ";
          cout<<endl;
        return 0;

}