#include<bits/stdc++.h>
using namespace std;
void f()
{
   static int x=0;
    cout<<x<<" ";
    x++;
}
int main()
{     static int x=0;
    for(int i=0;i<5;i++)
     {   cout<<"main "<<x++<<" ";
          f();
     }
      return 0;
}