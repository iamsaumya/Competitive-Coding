#include<iostream>
using namespace std;

int main()
{   int a[2000];
    int temp,i,j,x;
    int number,n,m;
    scanf("%d",&number);
    while(number--){
        scanf("%d",&n);
        a[0]=1;
        m=1;
        for(i=1;i<=n;i++){
            for(j=0;j<m;j++){
                x = a[j]*i+temp;
                a[j]=x%10;
                temp = x/10;
            }
            while(temp>0){
                a[m] = temp%10;
                temp = temp/10;
                m++;
            }
        }
        for(i=m-1;i>=0;i--){
            cout<<a[i];
        }
        cout<<endl;

    }
}
