#include <iostream>
#include<string.h>
#include<unordered_set>
using namespace std;

int main()
{   char str[100];
    cin>>str;
    unordered_set<char> charset;
    int length = strlen(str);
    for(int i =0;i<length;i++){
        charset.insert(str[i]);
    }
    if(charset.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
