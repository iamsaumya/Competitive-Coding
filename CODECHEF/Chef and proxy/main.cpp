#include<bits/stdc++.h>
using namespace std;
string s;
float percentage(){
    float P=0.0;
    int length = s.length();
    for(int i =0;i<length;i++){
        if(s[i]=='P' || s[i]=='p')
            P++;
    }
    return P/(length*1.0);
}

int main()
{
    int t,d;
    cin>>t;
    int proxy;
    for(int m=0;m<t;m++){
    cin>>d;
    cin>>s;
    proxy = 0;
    int length = s.length();
    for(int i=2;i<length-2;i++){
        if(s[i]=='A'){
            if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P')){
                    s[i]='p';
                    proxy++;
                }
            }
        if(percentage()>=0.75){
            cout<<proxy<<endl;
            break;
            }
    }
    if(percentage()<0.75)
              cout<<"-1"<<endl;
    }
    return 0;
}
