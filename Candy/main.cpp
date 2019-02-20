#include <iostream>
#include<stdlib.h>
using namespace std;


int merging(int arr[],int l, int m, int h){
    int i,j,k;
    int n1 = m-l+1;
    int n2 = h-m;
    int L[n1],R[n2];

    for(i=0;i<n1;i++){
        L[i]=arr[i+l];
    }
    for(j=0;j<n2;j++){
        R[i]=arr[i+h+1];
    }
    L[i]=9999;
    R[j]=9999;

    i=j=0;
    for(k=l;k<h;k++){
        if(L[i]<R[j])
            arr[k]=L[i++];
        else
            arr[k]=R[j++];
    }
    return 0;
}
int merge_sort(int arr[],int low,int high){

    int mid = high + (low - high)/2;
    if(low<high){
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merging(arr,low,mid,high);
    }
    return 0;
}
int main()

{   int sum=0,mean=0,mov=0;
    int number;//no of packets
    cin>>number;
    int arr[number];
    if(number == -1)
         exit;
   for(int i =0; i<number;i++){
        cin>>arr[i];
        sum += arr[i];
   }
   if(sum%number!=0){
    cout<<-1;
    return 0;
   }
   else
    mean = sum/number;

   merge_sort(arr,0,number);
   int count = 0;
   int *ptr1 = arr;
   int *ptr2 = arr;
   while(ptr1<ptr2){
        while(*ptr1<mean || *ptr2>mean){
            *ptr1 += 1;
            *ptr2 -=1;
            mov++;
        }
        if(*ptr1==mean)
            *ptr1++;
        if(*ptr2==mean)
            *ptr2--;
   }
   cout<<mov;
    return 0;
}
