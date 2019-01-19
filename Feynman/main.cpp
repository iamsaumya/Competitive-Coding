#include <iostream>

using namespace std;
int array[100];
void squares(){
    array[0]=1;
    array[1]=5;
   for(int i=2;i<=100;i++){
    array[i-1]=i*i + array[i-2];
   }
}

int main()
{   int number;
    int a;
    squares();
    while(true){
        cin>>a;
        if(a==0)
            break;
        else
          cout<<array[a-1]<<endl;
    }
    return 0;
}
