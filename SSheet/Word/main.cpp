#include <iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
    int length,uppercases=0;
    char word[100];
    cin>>word;
    length = strlen(word);
    int half = length/2;
    for(int i =0; i<length;i++){
        if(isupper(word[i]))
            uppercases++;
    }
    if(uppercases>half)
        for(int i=0;i<length;i++)
            word[i] = toupper(word[i]);
    else
        for(int i=0;i<length;i++)
            word[i] = tolower(word[i]);
    cout<<word;
    return 0;
}
