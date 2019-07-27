#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    while(true){
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            break;
        else {
                double w = static_cast<double>(b)/static_cast<double>(a);
                double z = static_cast<double>(c)/static_cast<double>(b);
                if((w)==(z)){
                d = a*pow(z,3);
                cout<<"GP "<<d<<endl;
            }
            else if((c-b)==(b-a)){
                d=a+3*(c-b);
                cout<<"AP "<<d<<endl;
            }
          }
    }
    return 0;
}
