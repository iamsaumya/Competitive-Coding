#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll arr[10001];
        ll dplmax[10001];
        ll dplmin[10001];
        ll dprmax[10001];
        ll dprmin[10001];

        for(int i=0;i<n;i++) {
            cin>>arr[i];
            dplmax[i]=dplmin[i]=dprmax[i]=dprmin[i]=arr[i];
        }

        for(int i=1;i<n-1;i++){
            dplmax[i] = max(dplmax[i-1]+dplmax[i],dplmax[i]);
            dplmin[i] = min(dplmin[i-1]+dplmin[i],dplmin[i]);
        }

        for(int j=n-2;j>=1;j--){
            dprmax[j] =  max(dprmax[j],dprmax[j+1] + dprmax[j]);
            dprmin[j] =  min(dprmin[j],dprmin[j+1]+ dprmin[j]);
        }
        ll ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            ans = max(ans,max(abs(dprmax[i+1]-dplmin[i]),abs(dplmax[i]-dprmin[i+1])));
        }
        cout<<ans<<endl;
    }
    return 0;
}
