#include <iostream>

using namespace std;

int main()
{
    int arr[5][5], note_i, note_j,dest_i=2,dest_j=2;
    for(int i =0;i<5;i++){
        for(int j =0; j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                note_i = i;
                note_j = j;
            }

        }
    }
    cout<<abs(dest_i-note_i)+abs(dest_j-note_j);
    return 0;
}
