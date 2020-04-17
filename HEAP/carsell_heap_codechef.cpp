#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        priority_queue<ll> pq;
        ll s=0,m=0;
        for(ll i=0;i<n;i++)
         {
             ll x;
             cin>>x;
             pq.push(x);
         }
         while(pq.size()!=0)
         {
             if((pq.top()-m)>0)
                 s = (s%mod + (pq.top()%mod)-m)%mod;
             else 
                break;
              pq.pop();
              m++;
         }
           cout<<s<<endl;
    }

	return 0;
}

