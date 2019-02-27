#include<bits/stdc++.h>
using namespace std;

int main()
{   int n;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sereja=0, Dima=0,flag=0;
    for(int i=0,j=n-1;i<=j;){
      if(flag==0){
        if(arr[i]>arr[j]){
            sereja+=arr[i];
            arr[i]=0;
            i++;
        }
        else{
            sereja+=arr[j];
            arr[j]=0;
            j--;
        }
        flag=1;
        continue;
      }
      else{
         if(arr[i]>arr[j]){
            Dima+=arr[i];
            arr[i]=0;
            i++;
        }
        else{
            Dima+=arr[j];
            arr[j]=0;
            j--;
        }
        flag=0;
        continue;
      }

    }
    cout<<sereja<<" "<<Dima;
    return 0;
}
