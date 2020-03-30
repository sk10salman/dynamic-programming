#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;   //insert index value in vector for find its ngl index
    stack<pair<int,int>>s;  //first nearest_greatest_left value ,secong its index value
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(s.empty())
           v.push_back(-1);
        else if(s.size()>0 && s.top().first>arr[i])
          {
              v.push_back(s.top().second);
          }
         else if(s.size()>0 && s.top().first<=arr[i])
           {
               while(s.size()>0 && s.top().first<=arr[i])
                {
                    s.pop();
                }
                if(s.empty())
                   v.push_back(-1);
                else if(arr[i]<s.top().first)
                   v.push_back(s.top().second);
           }
         s.push({arr[i],i});
    }
   
    for(int i=0;i<v.size();i++)
       cout<<i-v[i]<<" ";
    cout<<endl;
    return 0;
}