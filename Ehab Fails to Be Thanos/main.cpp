#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int>v;
    int x=0,xr=0;
    cin>>n;
    for(int i =0;i<(2*n);i++){
        cin>>x;
        v.push_back(x);
        xr=xr^x;
    }

    if(xr==0)
        cout<<"-1";
    else{
        x = v.back();
        v.pop_back();
        cout<<x<<" ";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }

    }
    return 0;
}
