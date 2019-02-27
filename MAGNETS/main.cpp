#include <iostream>

using namespace std;

int main()
{   int a,b=0,groups=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a!=b)
            groups++;
        b=a;
    }
    cout<<groups;
    return 0;
}
