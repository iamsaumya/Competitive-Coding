#include <iostream>

using namespace std;

int main()
{
    int width=0, friends, height;

    cin>>friends>>height;
    int arr[friends];
    for(int i =0;i<friends;i++){
        cin>>arr[i];
        width++;
        if(arr[i]>height){
            while(arr[i]>height){
                arr[i] = arr[i]/2;
                width++;
            }
        }
    }
    cout<<width;
    return 0;
}
