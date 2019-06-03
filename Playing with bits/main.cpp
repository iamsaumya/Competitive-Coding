#include<iostream>
using namespace std;

int cal_setbits(int a, int b){
    int temp=a;
    int setbits=0;
    while(a<=b){
        temp=a;
        while(temp>0){
            if((temp&1)!=0)
                 ++setbits;
            temp=temp>>1;
        }
        a++;
    }
    return setbits;
}
int main() {
	int q,a,b;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>a>>b;
        int setbits = cal_setbits(a,b);
        cout<<setbits<<endl;
    }
}
