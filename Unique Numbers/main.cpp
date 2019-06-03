#include<iostream>
using namespace std;
int n;
void find_unique_elements(int arr[]){
    int position,temp;
	int xr=0;

    for(int i =0;i<n;i++){
        xr = xr ^ arr[i];
	}
	cout<<xr<<endl;
    position=0;
	temp=xr;
	while(temp>0){
         if(temp&1)
		     break;
		 position++;
		 temp = temp>>1;
	}
    cout<<position<<endl;
	int mask  = 1<<position;
    int firstno=0;
	for(int i =0;i<n;i++){
		if((arr[i] & mask)!=0){
			firstno = firstno ^ arr[i];
		}
	}
    int secondno = firstno ^ xr;
	cout<<firstno<<" "<<secondno;

}


int main() {
   int arr[n];
   for(int i =0; i<n;i++){
	   cin>>arr[i];
   }
   find_unique_elements(arr);
}
