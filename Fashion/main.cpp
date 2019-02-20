#include<bits/stdc++.h>
using namespace std;

int main()
{      int test_case,n,num;
       long long int ans;
       cin>>test_case;
       while(test_case--){
            cin>>n;
            int m[n];
            int w[n];
            for(int i=0; i<n;i++){
                cin>>m[i];
            }
            for(int i =0;i<n;i++){
                cin>>w[i];
            }

            sort(m,m+n);
            sort(w,w+n);
            ans = inner_product(m,m+n,w,0);
       }

       return 0;
}
