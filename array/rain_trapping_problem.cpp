#include<bits/stdc++.h>
using namespace std;
    vector<int> leftknap(vector<int>&ar,int n)
    {
         vector<int>v;
    priority_queue<int>s;
    for(int i=0;i<n;i++)
    {
        
         if(s.size()>0 && s.top()>ar[i])
          v.push_back(s.top());
         else
          v.push_back(-1);
       /* else
           {
               while(s.size()>0&&s.top()<ar[i])
                  s.pop();
                if(s.size()==0)
                   v.push_back(-1);
                else
                  v.push_back(s.top());
           }*/
           s.push(ar[i]);
    }
      return v;  
    }
     vector<int> rightknap(vector<int>&ar,int n)
    {
         vector<int>v;
    priority_queue<int>s;
    for(int i=n-1;i>=0;i--)
    {
         if(s.size()>0 && s.top()>ar[i])
          v.push_back(s.top());
         else
          v.push_back(-1);
      /*  else
           {
               while(s.size()>0&&s.top()<ar[i])
                  s.pop();
                if(s.size()==0)
                   v.push_back(-1);
                else
                  v.push_back(s.top());
           }*/
           s.push(ar[i]);
    }
         reverse(v.begin(),v.end());
      return v;  
    }
    int trap(vector<int>& height) {
        
        int count=0;
        vector<int>v1=leftknap(height,height.size());
         vector<int>v2=rightknap(height,height.size());
        for(int i=0;i<height.size();i++)
        {
            if(v1[i]!=-1 && v2[i]!=-1)
                count += min(abs(height[i]-v1[i]),abs(height[i]-v2[i]));
        }
        return count;
    }
int main()
{
    vector<int>v;
   for(int i=0;i<12;i++)
     {
              int x;
cin>>x;
v.push_back(x);
     }
cout<<trap(v)<<endl;
   return 0;
}

