#include <iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main(){
   char word[1000];
   cin>>word;
   word[0] = toupper(word[0]);
   cout<<word<<endl;
   return 0;
}
