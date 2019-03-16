#include <iostream>

using namespace std;

int main()
{  int a;
    cin>>a;
    int temp;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int b,c,d;
    cin>>b;
    for(int i=0;i<b;i++){
        cin>>c>>d;
        c=c-1;
        temp = arr[c];
        arr[c]=0;
        if(c==0){
            arr[c+1]+=temp-d;
        }
        else if(c==a-1){
            arr[c-1] +=d-1;
         }
         else{
            arr[c+1]+=temp-d;
            arr[c-1]+=d-1;
         }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
