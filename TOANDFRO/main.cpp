#include<bits/stdc++.h>
using namespace std;

int main()
{   char message[300];
    int column;

    while(true){
             int var=0;
        cin>>column;
        if(column==0)  // ttyohhieneesiaabss
            break;
        cin>>message;
        int rows=strlen(message)/column;
        char arr[rows][column];
        for(int i=0;i<rows;i++){
                if(i%2==0){
                    for(int j=0;j<column;j++){
                        arr[i][j]=message[var++];
                    }
                 }
                if(i%2!=0) {
                    for(int j=column-1;j>=0;j--){
                        arr[i][j]=message[var++];
                    }
                }
        }

        for(int j=0; j<column;j++){
            for(int i=0;i<rows;i++){
                cout<<arr[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}
