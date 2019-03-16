#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    long long int total_icecreams=0,distress_kids=0;
    total_icecreams = b;
    char ch;
    long long int icecreams=0;
    while(a--){
        cin>>ch>>icecreams;
        if(ch=='+'){
            total_icecreams+=icecreams;
        }
        else{
            if(total_icecreams<icecreams){
                distress_kids++;
            }
            else{
                total_icecreams-=icecreams;
            }
        }
    }
    cout<<total_icecreams<<" "<<distress_kids;
    return 0;
}
