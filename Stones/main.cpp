#include <iostream>

using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int stones=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='R'){
            if(s[i+1]=='R')
                stones++;
        }
        else if(s[i]=='G'){
            if(s[i+1]=='G')
                stones++;
        }
        else {
            if(s[i+1]=='B')
                    stones++;
        }
    }
    cout<<stones;
    return 0;
}
