#include <bits/stdc++.h>
using namespace std;
bool compared[25][25];
int photo[25][25];

bool range(int i, int j, int n){
    if(i>=0 && i<n && j>=0 && j<n)
        return true;
    return false;
}

void wareagle(int i, int j, int n){
    if(!range(i,j,n) || compared[i][j]  || photo[i][j]==0)
       return;

    compared[i][j] = true;
    wareagle(i-1,j-1,n);
    wareagle(i-1,j,n);
    wareagle(i-1,j+1,n);
    wareagle(i,j-1,n);
    wareagle(i,j+1,n);
    wareagle(i+1,j-1,n);
    wareagle(i+1,j,n);
    wareagle(i+1,j+1,n);
    //cout<<i<<" "<<j<<endl;
}

int sol(int n){
     int ans = 0;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             if(!compared[i][j]){
                 if(photo[i][j]){
                    ans++;
                    wareagle(i,j,n);
                 }
             }
         }
     }
     return ans;
}
int main() {
      int n;
      int number = 1;
      while(cin>>n){
          memset(compared,false,sizeof(compared));
          memset(photo,0,sizeof(photo));
          for(int i = 0;i<n;i++){
              string s;
              cin>>s;
              for(int j = 0;j<n;j++){
                photo[i][j] = s[j] -  48;
              }
          }
          cout<<"Image number "<<number<<" contains "<<sol(n)<<" war eagles."<<endl;
          number++;
      }
}
