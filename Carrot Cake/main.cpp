#include <iostream>

using namespace std;

int main()
{   int a,b,c,d;
    float minutes=0,min1=0;
    cin>>a>>b>>c>>d;
    minutes = (b*a)/c;
    min1 = (b*a)/(2*c);
    min1+=d;
    if(minutes<=min1)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
