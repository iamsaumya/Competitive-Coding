#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    int a[50],i=0,j=0;
    getline(cin,s);
    int length = s.length();
    if(length == 1)
        cout<<s;
    else {
        for(i=0;i<ceil(length/2.0);i++){
            a[i]=s[j]-48;
            j+=2;
        }
    j=i;
    sort(a,a+i);
    j=0;
    for(i=0;i<ceil(length/2.0);i++){
        s[j] = a[i]+48;
        j+=2;
     }
     cout<<s;
}
    return 0;
}
