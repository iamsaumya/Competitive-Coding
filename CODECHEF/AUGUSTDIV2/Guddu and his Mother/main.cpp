#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int totalxor = 0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            totalxor ^= a[i];
        }
        int count = 0;
        int Xor = 0;
        for(int i=0;i<n-1;i++){
            Xor = a[i];
            for(int j=i+1;j<n;j++){
                Xor ^= a[j];
                if(Xor==0){
                    count+=(j-i);
                }
            }
        }

        cout<<count<<endl;
    }
}
