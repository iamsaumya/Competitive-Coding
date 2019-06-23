#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ll n;
    string str,str1;
    string str3="";

    cin>>n;
    cin>>str;
    cin>>str1;

    if(str1.compare(str)==0){
            cout<<0<<endl;
            return 0;
        }
   for(int i=1;i<n;i++){
       string s1 = str.substr(i);
       string s2 = str1.substr(0,n-i);
       if(s1.compare(s2)==0){
           cout<<i;
           return 0;
       }
   }
   cout<<n+1;

    return 0 ;

}
