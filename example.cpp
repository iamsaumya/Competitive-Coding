#include <iostream>
using namespace std;
int reverse(int a){
	int x=10; int c =0;
	int i=0,div;
	while(true){
	   div = a/x ;
	   if(div>0)
	    c+=div + i;
	   else
	    break;
	   i=i*10;
	   x = x*10;
	}
}

int main() {
	int number,i,j;
	cin>>number;
	int a[number][2];
  for( i =0; i<number;i++){
  	for( j=0;j<2;j++){
  		cin>>a[i][j];
  	}
  }
   for( i =0; i<number;i++){
    for(j=0;j<2;j++){
   		a[i][j]=reverse(a[i][j]);
   		cout<<a[i][j];
  	}
  	cout<<a[i][0]+a[i][1]<<endl;
  }

	return 0;
}
