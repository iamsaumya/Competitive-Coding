#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v1;
vector<ll>v2;

vector<ll> subsets(vector<ll> v){
    vector<ll>ans;
    int n= v.size();
    ans.clear();
    int m = 1<<n;
    for(int i =1;i<m;i++){
            ll sum  = 0;
            ll index = 0;
            for(int no = i; no>0; no = no>>1){
                if(no&1)
                    sum+=v[index];
                index++;
            }
            ans.push_back(sum);
    }
    return ans;
}

int main(){
   ll n,a,b;

   cin>>n>>a>>b;

   int n1 = n/2;
   int n2 = n-(n1);

   for(int i =0;i<n1;i++){
    ll x;
    cin>>x;
    v1.push_back(x);
   }

   for(int i =0;i<n2;i++){
    ll x;
    cin>>x;
    v2.push_back(x);
   }

   vector<ll>sub2;
   vector<ll>sub1;

   sub1 = subsets(v1);
   sub2 = subsets(v2);

   sort(sub2.begin(),sub2.end());

   ll ans = 0;
   int s =  sub1.size();
   for(int i =0;i<s; i++){

      ll st = a - sub1[i];
      ll en = b - sub1[i];

      auto it = lower_bound(sub2.begin(),sub2.end(),st);
      auto itr = upper_bound(sub2.begin(),sub2.end(),en);

      ll l = it - sub2.begin();
      ll k = itr - sub2.begin();
      ans+=(k - l);
   }
   cout<<ans<<endl;

   return 0;
}

