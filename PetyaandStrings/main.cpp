#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[100], str2[100];
    cin>>str1;
    cin>>str2;
    int compare = strcmpi(str1,str2) ;
    cout<<compare;
    return 0;
}
