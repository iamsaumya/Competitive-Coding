#include <bits/stdc++.h>
using namespace std;
void prime_generator(int a, int b){
    int i,j;
    bool flag;
    for(i=a;i<=b;i++){
        flag = true;
        for(j = 2;j<=sqrt(i);j++){
            if(i%j==0){
                 flag = false;
                 break;
            }
        }
       if(flag && i!=1)
          cout<<i<<endl;
    }
}
int main()
{
    int number;
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
        cout<<endl;
    }
    return 0;
}
