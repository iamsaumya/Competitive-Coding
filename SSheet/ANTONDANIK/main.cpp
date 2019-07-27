#include <iostream>

using namespace std;

int main()
{
    string game;
    int games,AntonWon=0, DanikWon=0;
    cin>>games;
    cin>>game;
    for(int i =0;i<games;i++){
        if(game[i]=='A')
            AntonWon++;
        else if (game[i]=='D')
            DanikWon++;
    }
    if(AntonWon == DanikWon){
        cout<<"Friendship";
        exit(0);
    }
    if(AntonWon>DanikWon)
        cout<<"Anton";
    else{
        cout<<"Danik";
    }
    return 0;
}
