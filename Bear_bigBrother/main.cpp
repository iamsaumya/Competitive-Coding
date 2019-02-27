#include <iostream>

using namespace std;

int main()
{
    int bear, big_bear;
    cin>>bear>>big_bear;
    int years=1;
    while(true){
        bear = bear*3;
        big_bear = big_bear*2;

        if(bear<=big_bear){
            years++;
        }
        else {
            break;
           }
    }
    cout<<years;
    return 0;
}
