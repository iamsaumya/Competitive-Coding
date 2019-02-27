#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    string s;
    cin>>s;
    int calories=0;
    int length = s.length();
    for(int i=0;i<length;i++){
        if(s[i]=='1')
            calories+=a;
        else if(s[i]=='2')
            calories+=b;
        else if(s[i]=='3')
            calories+=c;
        else
            calories+=d;
    }
    cout<<calories;
    return 0;
}
