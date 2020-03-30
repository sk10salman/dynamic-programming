#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    stack<int>s;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
           v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
          {
              v.push_back(s.top());
          }
         else if(s.size()>0 && s.top()>=arr[i])
           {
               while(s.size()>0 && s.top()>=arr[i])
                {
                    s.pop();
                }
                if(s.empty())
                   v.push_back(-1);
                else if(arr[i]>s.top())
                   v.push_back(s.top());
           }
         s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
       cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}