#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
        bool seive[1001];
    memset(seive,1,sizeof(seive));
    seive[0]=0;
    seive[1]=0;

    for(int i=2;i*i<1001;i++)
      {
         
          if(seive[i]==1)
           for(int p=i*i;p<1001;p += i)
              {
                  seive[p]=0;
              }
      }
      for(int i=0;i<1001;i++)
        {
            if(seive[i]==1)
               cout<<i<<" ";
        }
        cout<<endl;
        return 0;
}