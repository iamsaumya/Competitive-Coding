#include <iostream>
#include<cmath>
using namespace std;

void factorial_trailing_zeros(int a){
    int i=1;
    while(a>=pow(5,(i+1))){
           i++;}
    int answer=0;
    for(int j = i;j>0;j--){
            answer += a/(pow(5,j));
    }
    printf("%d\n",answer);
}

int main()
{
    int number;
    scanf("%d",&number);
    int array[number];
    int i;
    for(i =0; i<number;i++)
        scanf("%d",&array[i]);
    for(i =0;i<number;i++){
        factorial_trailing_zeros(array[i]);
    }
    return 0;
}
