#include <iostream>

using namespace std;

int main()
{   int output=0;
    int teams=0;
    cin>>teams;
    int arr[teams][2];

    for(int i=0;i<teams;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<teams;i++){
        for(int j=0;j<teams;j++){
            if(i==j)
                continue;
            else{
                if(arr[i][0]==arr[j][1])
                    output++;
            }
        }
    }
    cout<<output;
    return 0;
}
