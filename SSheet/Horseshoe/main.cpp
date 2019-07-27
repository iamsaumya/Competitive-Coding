#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int horseshoe=0;
    if((a==b)||(a==c)||(a==d))
        horseshoe++;
    if((b==c)||(b==d))
        horseshoe++;
    if(c==d)
        horseshoe++;
    cout<<horseshoe;
    return 0;
}
