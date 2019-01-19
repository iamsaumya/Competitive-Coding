#include <iostream>
using namespace std;
void prime_generator(int a, int b){
    int i,j;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i)
            printf("%d\n",i);
    }
    printf("\n");
}
int mains()
{
    short int number;
    scanf("%d",&number);
    int array[number][2];
    int i;
    for(i = 0; i<number;i++){
        for(int j =0; j<2;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i = 0; i<number ; i++){
        prime_generator(array[i][0],array[i][1]);
    }
    return 0;
}
