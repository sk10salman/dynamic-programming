#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> leftt(ll arr[],ll n)
{
      stack<pair<ll,ll>>s;
      vector<ll>v;
      for(ll i=0;i<n;i++)
        {
            if(s.size()==0)
               v.push_back(-1);
            else if(arr[i]>s.top().first)
               v.push_back(s.top().second);
            else
             {
                 while(s.size()>0 && arr[i]<s.top().first)
                    {
                        s.pop();
                    }
                    if(s.size()==0)
                       v.push_back(-1);
                    else 
                       v.push_back(s.top().second);


             }
             s.push({arr[i],i});
        }
        return v;
}
vector<ll> rightt(ll arr[],ll n)
{
      stack<pair<ll,ll>>s;
      vector<ll>v;
      for(ll i=n-1;i>=0;i--)
        {
            if(s.size()==0)
               v.push_back(n);
            else if(arr[i]>s.top().first)
               v.push_back(s.top().second);
            else
             {
                 while(s.size()>0 && arr[i]<s.top().first)
                    {
                        s.pop();
                    }
                    if(s.size()==0)
                       v.push_back(n);
                    else 
                       v.push_back(s.top().second);


             }
             s.push({arr[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
}
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
  vector <ll> v = leftt(arr,n);
   vector <ll> v1 = rightt(arr,n);
   ll mx = INT_MIN;
    for(ll i=0;i<n;i++)
      {
           ll x = (v1[i]-v[i]-1)*arr[i];
           mx = max(mx,x);
      }
   cout<<mx<<endl;

}