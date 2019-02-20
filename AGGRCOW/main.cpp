#include <iostream>
#include<algorithm>
using namespace std;
int N,C;
int A[100000];
int fnc(int space){
    int i,temp=1;
    int prev = A[0];
    for(i = 1;i<N;i++){
        if(A[i]-prev>=space){
            temp++;
            if(temp==C)
                return 1;
            prev = A[i];
        }
    }
    return 0;
}
int binsearch(){
    int l = A[0];
    int r = A[N-1];
    while(l<=r){
        int mid = l+(r-l)/2;
        if(fnc(mid))
           l = mid+1;
        else
           r = mid-1;
    }
    cout<<l-1;
}
int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases){
        cin>>N>>C;
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        sort(A,A+N);
        binsearch();
        test_cases--;
    }
    return 0;
}
