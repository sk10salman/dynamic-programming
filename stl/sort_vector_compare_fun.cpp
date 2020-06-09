#include<bits/stdc++.h>
using namespace std;
bool cmp(int num1,int num2)
{
    return num1<num2;
}
int main()
{
    vector<int>v={10,2,5,6,12,9,12,20,15};
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<" ";
    cout<<endl;
    return 0;

}