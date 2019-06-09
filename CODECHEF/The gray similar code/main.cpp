#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long

int main()
{
    ll n;
    vector<ll>v;
    ll a;
    cin>>n;
    for(ll i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
    }

    if(n>=130){
        cout<<"Yes";
        return 0;
    }
    else{
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                for(ll k=j+1;k<n;k++){
                    for(ll l=k+1;l<n;l++){
                        if( (v[i]^v[j]^v[k]^v[l]) ==0){
                            cout<<"Yes";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout<<"No";
    return 0;
}
