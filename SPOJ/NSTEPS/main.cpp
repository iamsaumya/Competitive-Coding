#include <iostream>

using namespace std;

int main()
{    int a,b;
    int number;
    cin>>number;
    while(number--){
        cin>>a>>b;
        if(a!=b){
        if((a%2!=0 && b%2==0) || (b%2!=0 && a%2==0)||(a!=b+2)||(b!=a-2))
            cout<<"No Number"<<endl;
        else if(a%2==0 && b%2==0){
            cout<<a+b<<endl;
        }
        else {
            cout<<a+b-1<<endl;
        }
    }
    else{
        if(a%2==0){
            cout<<a+b<<endl;
        }
        else {
            cout<<a+b-1<<endl;
        }
    }
    }
    return 0;
}
