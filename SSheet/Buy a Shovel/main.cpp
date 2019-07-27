#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int output=0;
    int multiply = 1;
    while(true){
        int val = a * multiply;
        if(val%10==0){
            output = multiply;
            break;
        }
        else{
            if((val-b)%10==0){
                output=multiply;
                break;
            }
        }
        multiply++;
    }
    cout<<output;
    return 0;
}
