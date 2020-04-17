#include<bits/stdc++.h>
using namespace std;
void f(int *x)
{
   *x += 5;
    
}
void so(int &x)
{
    x +=10;
}
void sol(int **x)
{
   int *p=*x;
   *p = *p + 50;
}
int main()
{
    int a =5;
    int *p=&a;
    f(p);
    cout<<"value"<<a<<endl;
    so(a);
    cout<<"value"<<a<<endl;
      sol(&p);
    cout<<"value"<<a<<endl;
    return 0;
}