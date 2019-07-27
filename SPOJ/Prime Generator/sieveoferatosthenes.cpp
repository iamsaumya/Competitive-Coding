#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
#define DIFF_NUM 100000
int myPrimes[DIFF_NUM];
int cnt;
void populatemyprimes(int n){
    int i = 0, j=0;
    bool primeArray[DIFF_NUM];
    memset(primeArray,true,sizeof(primeArray));
    int myrange = floor(sqrt(n));
    int k = floor(sqrt((double)myrange));

    for(i=2;i<=k;i++){
        if(primeArray[i]==true){
            for(j=i*i;i<myrange;j = j+i){
                primeArray[j] = false;
            }
        }
    }
    cnt = 0;
    for(i=2;i<=myrange;i++){
        if(primeArray[i] == true){
            myPrimes[cnt++]=i;
        }
    }
   cout<<endl;
}
int main(){
    int number,i=0,s;
    scanf("%d",&number);

    int m,n,p;
    bool PrimesNum[DIFF_NUM];


    while(number--){
        scanf("%d %d",&m,&n);
        memset(PrimesNum,true,sizeof(PrimesNum));
        populatemyprimes(n);
        for(i=0;i<cnt;i++){
            p = myPrimes[i];
            s = m/p;
            s = s*p;

            for(int j=s;j<=n;j=j+p){
                if(j<m) continue;
                PrimesNum[j-m] = false;
            }
        }
        for(i=0;i<cnt;i++){
            if(myPrimes[i]>=m &&myPrimes[i]<=n)
                printf("%d\n",myPrimes[i]);
        }
        for(i=0;i<n-m+1;i++){
            if(PrimesNum[i]==true && (i+m)!=1)
                printf("%d\n",i+m);
        }
    }
    return 0;
}
