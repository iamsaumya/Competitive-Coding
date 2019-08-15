#include<bits/stdc++.h>
using namespace std;
int main()
{   unsigned int a;
    while(cin>>a && a!=0){
        unsigned int sqr =(int)sqrt(a);
        cout<<(sqr*sqr==a?"yes\n":"no\n");
     }
    return 0;
}
