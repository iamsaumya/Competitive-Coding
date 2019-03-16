#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  n,d=1,c=-1,div;
    int numPos=0, numNeg=0;
    cin>>n;
    int half= ceil(n/2.0);
    int check_half=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0)
            numNeg++;
        if(arr[i]>0)
            numPos++;
    }
    if(numPos>=half){
       cout<<1;
    }
    else if(numNeg>=half){
        cout<<-1;
    }
     else
        cout<<0;
    return 0;
}
