#include<bits/stdc++.h>
using namespace std;

int main()
{   long long a;
    while(true){
    cin>>a;
    if(a==0)
        return 0;
    bool light = false;
    for(int i=1;i<=sqrt(a);i++){
        if(a%i==0){
            if(a/i==i){
                light = !(light);
            }
            else{
                light = !light;
                light = !light;
            }
        }
    }
    if(light)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    }
    return 0;
}
