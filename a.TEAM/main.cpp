#include <iostream>

using namespace std;

int main()
{   int prob=0;
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if((a==1 && b==1 )||(b==1 && c==1)||(c==1 && a==1)){
            prob++;
        }

    }
    cout<<prob;
    return 0;
}
