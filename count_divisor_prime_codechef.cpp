#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// count prime no divisors of number 
ll SieveOfEratosthenes(ll number) 
{ 
ll numPrimeFactors = 0;
if(number == 1) {
    // Edge case
    numPrimeFactors = 0;
} else if(((number != 0) && !(number & (number - 1)))) {
    // If the number is a power of 2, we immediately know how many prime factors it has
    numPrimeFactors = number/2;
} else {
    // Main algorithm: Calculate # of prime factors using division method
    while(number > 1) {
        bool foundFactor = false;
        for(long j = 3; j*j <= number; j+=2) {
            if(number%j == 0) {
                numPrimeFactors++;
                number /= j;
                foundFactor = true;
                break;
            }
        }
        if(!foundFactor) {
            // number is prime
            numPrimeFactors++;
            break;
        }
    }
}
    return numPrimeFactors;
} 
  
  


ll countDivisors(ll n) 
{ 
    ll cnt = 0; 
    for (ll i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
/*
int f(ll x,ll k)
{
    if(x<=k)
       return 0;
      ll i=0;
     while(i<mod)
     {
         if(countDivisors(i)==x &&  countprimeDivisors(i)==k )
            return 1;
            i++;
     }
     return 0;
       
}*/
int main() {

    int t;
    cin>>t;
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
       cout<<countDivisors(x)<<endl;
        cout<<SieveOfEratosthenes(x)<<endl;
     
    }
	return 0;
}

