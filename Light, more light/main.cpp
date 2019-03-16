#include <iostream>

using namespace std;

int main()
{   long long int a;
    while(true){
    cin>>a;
    if(a==0)
        break;
    bool lights = false;
    if(a%2==0){
    for(int i=2;i<=a;i+=2){
        if(a%i==0)
            lights = !(lights);
      }
      lights = !lights;
    }
    else{
       for(int i=1;i<=a;i+=2){
        if(a%i==0)
            lights =!(lights);
      }
    }
    if(lights){
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
    }
    }
    return 0;
}
