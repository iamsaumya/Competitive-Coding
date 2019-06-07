#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int no_of_occurences =0;
    int pre=arr[0];
    int xr =0;
    for(int i =0;i<n;i++){

        if(i>0){
            pre = arr[i-1];
        }
        xr = xr ^ arr[i];

        if(arr[i]==pre)
            no_of_occurences++;
        else if(no_of_occurences==0 && arr[i]!=arr[i+1]){
            cout<<xr;
            break;
        }
        else
            no_of_occurences=1;

    if(no_of_occurences==3){
        no_of_occurences=0;
        xr = xr ^ arr[i];
       }
    }

    return 0;
}
