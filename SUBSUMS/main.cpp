#include <iostream>
#include<cstring>
#include<vector>
using namespace std;
int64_t A,B,subsets=0,sum;

void find_the_sum(int64_t str[], int n){
    sum=0;
    int64_t i=0;
    while(n>0){
        if(n&1){
            sum+=str[i];
        }
        i++;
        n=n>>1;
    }
    if((A<=sum)&&(sum<=B)){
        subsets++;
    }
}
void generateSubsets(int64_t str[],int N){
    int64_t range = (1<<N) - 1;
    for(int64_t i=0;i<=range;i++){
        find_the_sum(str,i);
    }
}
int main()
{   int N;
    vector<int64_t> v1;
    vector<int64_t> v2;
    cin>>N>>A>>B;
    int64_t n1=N/2;
    int64_t n2 = N-n1;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }

    for(int i=0;i<n1;i++){
        fflush(stdin);
        cin>>str[i];
    }
    generateSubsets(str,N);
    cout<<subsets;
    return 0;
}
