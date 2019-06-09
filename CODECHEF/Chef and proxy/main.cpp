#include<bits/stdc++.h>
using namespace std;

int percentage(string s, int length){
    float P=0.0;
    for(int i =0;i<length;i++){
        if(s[i]=='P' || s[i]=='p')
            P++;
    }

    return P/length;
}

int main()
{
    int t,d;
    cin>>t>>d;
    string s;
    int proxy=0;
    for(int m=0;m<t;m++){
    cin>>s;
    int length = s.length();
    float A = percentage(s,length);
    int a = length-(A*length);
    cout<<a<<endl;
    if(percentage(s,length)>=0.75){
        cout<<0<<endl;
    }
    else {
        for(int i=2;i<length-2;i++){
            if(s[i]=='A'){
                if((s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P')){
                        s[i]='p';
                        proxy++;
                    }
                }
            if(A==proxy){
                cout<<proxy<<endl;
                break;
                }
            }
    }
    if(percentage(s,length)<0.75)
            cout<<"-1"<<endl;
    }
    return 0;
}
