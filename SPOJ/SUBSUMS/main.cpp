#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<ll>v1;
vector<ll>v2;

vector<ll> subsets(vector<ll> v){
    vector<ll>ans;
    int n= v.size();

    for(int i =0;i<(1<<n);i++){
            ll sum  = 0;
            ll index = 0;
            while(i){
                if(i&1)
                    sum+=v[index++];
                i = i>>1;
            }
            ans.push_back(sum);
    }

    return ans;
}

int main(){
   ll n,a,b;

   cin>>n>>a>>b;

   int n1 = n/2;
   int n2 = n-(n/2);

   for(int i =0;i<n1;i++){
    int x;
    cin>>x;
    v1.push_back(x);
   }

   for(int i =0;i<n2;i++){
    int x;
    cin>>x;
    v2.push_back(x);
   }

   vector<ll>sub1;
   vector<ll>sub2;

   sub1 = subsets(v1);
   sub2 = subsets(v2);

   sort(sub2.begin(),sub2.end());

   ll ans = 0;
   for(int i =0;i<v1.size();i++){
      ll st = a - v1[i];
      ll en = b - v1[i];

      auto it = lower_bound(v2.begin(),v2.end(),st);
      auto itr = upper_bound(v2.begin(),v2.end(),en);

      ll l = it - v2.begin();
      ll k = itr - v2.begin();
      ans+=(k - l);
   }

   cout<<ans;

   return 0;
}

