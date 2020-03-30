#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    vector<long long>v;
    stack<long long>s;
    long long n;
   
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(s.empty())
           v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i])
          {
              v.push_back(s.top());
          }
         else 
           {
               while(s.size()>0 && s.top()>=arr[i])
                {
                    s.pop();
                }
                if(s.empty())
                   v.push_back(-1);
                else
                   v.push_back(s.top());
           }
         s.push(arr[i]);
    }
   
    for(int i=0;i<v.size();i++)
       cout<<v[i]<<" ";
    cout<<endl;
    }
    return 0;
}