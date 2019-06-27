#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define VAL 1e+18
ll N,K,T;

vector<ll>Grundy(VAL);
ll calculateMex(unordered_set<ll> Set){

    ll Mex =0;

    while(Set.find(Mex) != Set.end())
        Mex++;

    return Mex;

}
ll calculateGrundy(ll n,vector<ll>Grundy){
    if(n==0)
     return 0;

   if(Grundy[n] > -1)
          return Grundy[n];

   unordered_set<ll>Set;

   for(int i=1;i<=K;i++)
    Set.insert(calculateGrundy(n-i,Grundy));

   ll temp = Grundy[n] = calculateMex(Set);

   return temp;
}
int main()
{
    cin>>T;

    while(T--){
        cin>>N>>K;
        for(int i=0;i<N+1;i++)
            Grundy[i]=-1;
        ll temp = calculateGrundy(N,Grundy);
        if(temp == 0)
               cout<<"Dishant"<<endl;
        else
            cout<<"Arpa"<<endl;
        N=K=0;
    }
    return 0;
}
