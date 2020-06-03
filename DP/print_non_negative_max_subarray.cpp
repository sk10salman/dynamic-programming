#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>v)
{
    int s=0;
    for(int i=0;i<v.size();i++)
      s+= v[i];
     return s;
}
vector<int> solve(int ar[],int n)
{
    vector<int>v{0};
    for(int i=0;i<n;i++)
     {
         vector<int>v1;
         
         while(i<n && ar[i]>=0)
            v1.push_back(ar[i]);
             
            
        if(v1.size()>0)
       { if(sum(v1)>sum(v))
            
           { v.clear();
               for(int k=0;k<v1.size();k++)
                 v.push_back(v1[k]);
           }
            
              if( sum(v1)>sum(v) && v.size()<v1.size())
               { v.clear();
               for(int k=0;k<v1.size();k++)
                 v.push_back(v1[k]);}
           
       }
        v1.clear();
     }
     return v;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n;
	    cin>>n;
	    int k=0;
	    int ar[1000];
	    for(int i=0;i<n;i++)
	      cin>>ar[i];
	      
	      vector<int>v = solve(ar,n);
	     for(int i=0;i<v.size();i++)
	        cout<<v[i]<<" ";
	       cout<<endl;
	       
	   
	     }
	
	return 0;
}
