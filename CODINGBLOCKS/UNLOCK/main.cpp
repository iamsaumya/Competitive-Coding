#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
   long  long int arr[n];
    for(long long int i=0;i<n;i++){
            cin>>arr[i];
    }
    for(int i =0;i<n-1;i++){
       long long int *mx = max_element(arr+i+1,arr+n);
       if(arr[i]< *mx){
         swap(arr[i],*mx);
        k--;
        if(k==1){
            break;
        }
       }
    }
    for(long long int i=0;i<n;i++){
            cout<<arr[i]<<" ";
    }
    return 0;
}
