#include <iostream>

using namespace std;

int exchange_coin(long long int coin){
    float a = coin/2;
    float b = coin/3;
    cout<<"a"<<a<<endl;
    cout<<"b"<<b;
    float c = coin/4;
    cout<<"c"<<c<<endl;
    int max1 = a+b+c;
    return max1;
}
int main()
{   int temp = 10;
    long long int coin;
    int maximum, max1;
    while(temp--){
        cin>>coin;
        maximum = coin;
        max1 = exchange_coin(coin);

        /*if(max1>maximum)
          cout<<max1;
        else
          cout<<maximum;
      cout<<endl;*/

    }
    return 0;
}
