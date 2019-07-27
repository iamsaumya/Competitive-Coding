#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    string str2;
    int n=0;
    cin>>str1;
    cin>>str2;
    for(int i=0;i<str2.length();i++){
        if(str2[i]==str1[n])
            n++;
    }

    cout<<n+1;
    return 0;
}
