#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    char s[a+1];
    s[a]='\0';
    int i;
    int num =97;
    for(i=0;i<b;i++){
        s[i]=num++;
    }
    int num1 = num;
    num = 97;
    for(;i<a;i++){
      // if(num1>num){
         s[i]=s[i-2];
      //   num++;
     //  }
      // else{
        //  num=97;
          //s[i]=s[i-2];
       //}
    }
    cout<<s;
    return 0;
}
