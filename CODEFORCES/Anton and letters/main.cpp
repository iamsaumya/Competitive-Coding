#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int a[26];
    memset(a,0,26*sizeof(a[0]));
    string input;
    getline(cin,input);
    int unique=0;
    int i=0;
    while(input[i]!='}'){
        int j = input[i];
        if((97<=j)&&(j<=122)){
            a[j%97]+=1;
        }
        i++;
    }
    for(int i=0;i<26;i++){
        if(a[i]>0)
            unique++;
    }
    cout<<unique;
    return 0;
}
