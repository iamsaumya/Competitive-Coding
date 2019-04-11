#include <iostream>

using namespace std;

int main()
{   long long int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    long long int hours1=0,hour=0;
    for(int i=0;i<a;i++){
        if(arr[i]==0){
           hour=max(hours1,hour);
            hours1=0;
          continue;
        }
        else{
        hours1++;
        if(i==0){
            if(arr[a-1]==1){
                hours1++;
              }
            }
        else if(i==a-1){
            if(arr[0]==1)
                hours1++;
        }

    }
    }
    cout<<hour;
    return 0;
}
