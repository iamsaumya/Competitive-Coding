#include <iostream>
#include<cmath>
using namespace std;
// Not Accepted : Wrong Answer error , Problem code 7974
int main()
{
    float a,b,c,d;
    while(true){
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            break;
        else {
                int w = b/a;
                int z = c/b;
            if((w)==(z)){
                d=a*pow(z,3);
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
