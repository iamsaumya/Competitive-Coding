#include <iostream>

using namespace std;

int main()
{
    int policemen=0,i,crimes=0, crimes_untreated=0,n,number;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>number;
        if(number==-1){
            crimes = number;
            if(policemen==0)
                crimes_untreated++;
            else{
                policemen = policemen - 1;
                }
        }
        else {
            policemen = policemen+number;
        }
    }
    cout<<crimes_untreated;
    return 0;
}
