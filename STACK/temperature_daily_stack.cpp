#include<bits/stdc++.h>
using namespace std;
#define ll long long
 vector<int> dailyTemp(vector<int>& arr) {
        stack<pair<ll,ll>>s;
      vector<int>v;
        ll n=arr.size();
      for(ll i=n-1;i>=0;i--)
        {
            if(s.size()==0)
               v.push_back(0);
            else if(arr[i]<s.top().first)
               v.push_back(s.top().second-i);
            else
             {
                 while(s.size()>0 && arr[i]>=s.top().first)
                    {
                        s.pop();
                    }
                    if(s.size()==0)
                       v.push_back(0);
                    else 
                       v.push_back(s.top().second-i);


             }
             s.push({arr[i],i});
        }
        reverse(v.begin(),v.end());
        return v;

    }
int main()
{
   int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++)
  {
   int x;
cin>>x;
v.push_back(x);
   }
vector<int>v1 = dailyTemp(v);
for(int i=0;i<v1.size();i++)
   cout<<v1[i]<<" ";
return 0;
}

/*
Given a list of daily temperatures T, return a list such that, for each day in the input, tells you how many days you would have to wait until a warmer temperature. If there is no future day for which this is possible, put 0 instead.

For example, given the list of temperatures T = [73, 74, 75, 71, 69, 72, 76, 73], your output should be [1, 1, 4, 2, 1, 1, 0, 0].

Note: The length of temperatures will be in the range [1, 30000]. Each temperature will be an integer in the range [30, 100].
*/
