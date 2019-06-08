#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000000
#define ll long long
vector<ll> a,b,c;
 ll k,n,x;

vector<vector<ll>> multiply(vector<vector<ll>> A, vector<vector<ll>> B){
       vector<vector<ll>>C(k+1,vector<ll>(k+1));
       for(int i=1;i<=k;i++){
           for(int j=1;j<=k;j++){
               for(int x=1;x<=k;x++){
                 C[i][j] = (C[i][j] + (A[i][x]*B[x][j])%MOD)%MOD;
               }
           }
       }
       return C;
}


vector<vector<ll>> power(vector<vector<ll>>T, ll n){
             if(n==1)
               return T;

             if(n&1){
                   return multiply(T,power(T,n-1));
             }
             else{
                 vector<vector<ll>> X = power(T,n/2);
                 return multiply(X,X);
             }
}


ll compute(ll n){

       if(n==0)
          return 0;

       else if(n<=k){
           return b[n-1];
       }

       else
       {
          vector<ll>F1(k+1);
          for(int i=1;i<=k;i++){
              F1[i] = b[i-1];
          }

          vector<vector<ll>>T(k+1,vector<ll>(k+1));

          for(int i=1;i<=k;i++){
              for(int j=1;j<=k;j++){
                  if(i<k){
                     if(i==j-1)
                      T[i][j]=1;
                    else
                      T[i][j]=0;
                    }
                  else
                      T[i][j] = c[k-j];
              }
          }
          T = power(T,n-1);

          ll val=0;

          for(int i=1;i<=k;i++){
              val = (val + (T[1][i]*F1[i])%MOD)%MOD;
          }
          return val;
       }

}

int main(){
    int t;
    cin>>t;
    while(t--){
          cin>>k;

          for(int i=0; i<k; i++){
              cin>>x;
              b.push_back(x);
          }

          for(int i=0; i<k ;i++){
              cin>>x;
              c.push_back(x);
          }

          cin>>n;

          cout<<compute(n)<<endl;

          b.clear();
          c.clear();
    }
}
