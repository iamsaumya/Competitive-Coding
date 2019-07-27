#include<bits/stdc++.h>
using namespace std;
#include <iostream>
int main()
{
    string str;
    int value;
    int ptr = 'a';
    int moves=0;
    cin>>str;
    int size = str.length();
    for(int i=0;i<size;i++){
        value = abs(ptr-str[i]);
        if(value<=13){
            moves +=value;
            ptr = str[i];
         }
        else {
            value = 26 - value;
            moves +=value;
            ptr = str[i];
        }
    }
    cout<<moves;
    return 0;
}
