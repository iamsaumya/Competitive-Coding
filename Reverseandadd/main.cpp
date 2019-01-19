#include <iostream>
using namespace std;
int reverse(int a){
	int reverse_num = 0;
	while(a>0){
	    reverse_num = reverse_num*10 + a%10;
	    a = a/10;
	}
	return reverse_num;
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
   		a[i][j] = reverse(a[i][j]);
  	}
  	cout<<reverse(a[i][0]+a[i][1])<<endl;
  }

	return 0;
}
