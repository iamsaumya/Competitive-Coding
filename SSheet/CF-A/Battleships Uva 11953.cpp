#include <bits/stdc++.h>
using namespace std;
char ground[100][100];
 int n;

 int xdir[] = {0,-1,1,0};
 int ydir[] = {-1,0,0,1};

bool isrange(int i, int j){
    return (i>=0 && i<n && j>=0 && j<n);
}
void dfs(int i, int j){
    if(isrange(i,j) && ground[i][j]!='.'){
         ground[i][j] = '.';
         for(int x=0;x<4;x++){
             dfs(i+xdir[x],j+ydir[x]);
         }
    }
}
int main() {
    int t;
    cin>>t;
     int num = 1;
    while(t--){
        memset(ground,'.',sizeof(ground));
        cin>>n;
        for(int i =0 ;i<n;i++ ){
            for(int j=0;j<n;j++){
                cin>>ground[i][j];
            }
        }
        
        int ans= 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(ground[i][j]=='x' || ground[i][j]=='X'){
                    ans++;
                    dfs(i,j);
                }
            }
        }
        cout<<"Case "<<num++<<": "<<ans<<endl;
    }
}
