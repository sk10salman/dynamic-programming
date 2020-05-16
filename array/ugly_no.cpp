#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    dp[0]=1;
     dp[1]=1;
    int a=2,b=3,c=5;
   for(int i=2;i<=n;i++)
   {
       dp[i]=min(a,min(b,c));
       if(dp[i]==a)
       {
           a=dp[i]*2;
       }
       else if(dp[i]==b)
        {
            b = dp[i]*3;
        }
        else
           c=dp[i]*5;

        
   }
     cout<<"ugly "<<dp[n]<<endl;
     return 0;

}