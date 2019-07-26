#include <bits/stdc++.h>
using namespace std;
int t,h;
int alltimeMax=INT_MIN;

void makeZero(int board[12][5],int hll, int hul){
    for(int i=hll;i<=hul;i++){
        for(int j=0;j<5;j++){
            if(board[i][j]==-1)
                board[i][j]=0;
        }
    }
}

bool isValid(int i, int j){
  return (i>=0) && (i<h) && (j>=0) && (j<5);
}

int makeitMax(int board[12][5], int i, int j, int sum){
    if(!isValid(i,j))
        return sum;
    if(board[i][j]==1){
        sum+=board[i][j];
        //cout<<"Found one at "<<i<<" and "<<j<<endl;
    }
    int a = makeitMax(board,i-1,j,sum);
    int b = makeitMax(board,i-1,j+1,sum);
    int c = makeitMax(board,i,j-1,sum);

    int d = max(a,b);

    return max(d,c);
}
int main()
{

    cin>>t;
    int board[12][5]={0};
    while(t--){

        cin>>h;
        for(int i=0;i<h;i++){
            for(int j=0;j<5;j++){
                cin>>board[i][j];
            }
        }

        int temp_board[12][5];
        for(int i=0;i<h;i++){
            for(int j=0;j<5;j++){
                temp_board[i][j]=board[i][j];
            }
        }

        if(h<5){
              int max_value = makeitMax(board,h-1,2,0);
              alltimeMax = max(max_value,alltimeMax);
        }
        else {

            int heightupperlimit = 4;
            int heightlowerlimit = 0;
            while(heightlowerlimit<=h-5){
                makeZero(board,heightlowerlimit,heightupperlimit);
              //   cout<<"In here 4"<<endl;
                int max_value = makeitMax(board,h-1,2,0);
                alltimeMax = max(max_value,alltimeMax);
                for(int i=0;i<h;i++){
                    for(int j=0;j<5;j++){
                        board[i][j]=temp_board[i][j];
                  }
                }
                heightlowerlimit++;
                heightupperlimit++;
            }
      }
       cout<<alltimeMax<<endl;
    }
    return 0;
}
