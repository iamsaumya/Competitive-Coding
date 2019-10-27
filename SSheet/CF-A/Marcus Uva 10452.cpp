#include <bits/stdc++.h>
using namespace std;

string path = "IEHOVA#";
bool solve(int j, int n, int i,vector<vector<char>>vec, int pointer, vector<string>ans){
    if(pointer == 7){
        for(int i = 0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1)
                cout<<" ";
        }
        cout<<endl;
        return true;
    }
    if(vec[j][i-1]==path[pointer]){
        ans.push_back("left");
        bool found = solve(j,n,i-1,vec,pointer+1,ans);
        if(found)
            return true;
        ans.pop_back();
    }
    if(vec[j][i+1]==path[pointer]){
        ans.push_back("right");
        bool found = solve(j,n,i+1,vec,pointer+1,ans);
        if(found){
            return true;
        }
        ans.pop_back();
    }
    if(vec[j-1][i]==path[pointer]){
        ans.push_back("forth");
        bool found =  solve(j-1,n,i,vec,pointer+1,ans);
        if(found)
            return true;
        ans.pop_back();
    }

    return false;
}
int main() {
     int t;
     cin>>t;
     while(t--){
         int m,n;
         cin>>m>>n;
         vector<vector<char>>vec(m);
         string str;
         for(int i = 0;i<m; i++){
            cin>>str;
            for(int j = 0;j<n;j++){
                char s = str[j];
                vec[i].push_back(s);
            }
         }
         int i = 0;
         for( i = 0;i<n;i++){
            if(vec[m-1][i]=='@')
                 break;
         }
         vector<string>ans;
         bool a = solve(m-1,n,i,vec,0,ans);
     }
}
