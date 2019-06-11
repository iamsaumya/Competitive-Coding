#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool composite(ll n){
    for(ll i=2;i<sqrt(n);i++){
        if((n%i)==0)
           return true;
    }
    return false;
}

int main() {
	ll n,m;
    cin>>m;
    n=m;

    if(!composite(n)){
        cout<<0;
        return 0;
    }

    ll primeFactorsSum =0;
    while(n%2==0){
        n/=2;
        cout<<2<<" ";
        primeFactorsSum +=2;
    }

    for(ll i=3;i<=sqrt(m);i+=2){
        while((n%i)==0 && n!=1){
            n/=i;
            cout<<i<<" ";
            primeFactorsSum +=i;
        }

    }
   return 0;
}
