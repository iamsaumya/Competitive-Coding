#include <iostream>

using namespace std;

int main()
{
    int n,b,d;
    cin>>n>>b>>d;
    int arr[n];
    int a,sum=0,overflow=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>b){
            arr[i]=0;
        }
        else{
            arr[i]=a;
        }
        sum+=arr[i];

        if(sum>d){
            overflow++;
            sum=0;
        }
    }
  cout<<overflow;
    return 0;
}
