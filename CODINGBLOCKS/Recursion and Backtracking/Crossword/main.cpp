#include <bits/stdc++.h>
using namespace std;
int n,m;
set<string>s;
string dictionary[100];
bool visited[5][5]={false};

void finding(string dictionary[],string output){
           for(int i=0;i<n;i++){
               if(dictionary[i]==output){
                     s.insert(output);
                     return;
            }
    }
}

bool isValid(int i, int j){
    return (i<m) && (i>=0) && (j<m) && (j>=0);
}
void solvecrossword(string dictionary[],char crossword[][5],int i, int j,string output, int k){
         visited[i][j]=true;
         output.push_back(crossword[i][j]);
         cout<<output<<endl;
         finding(dictionary,output);
         output.erase(output.begin());
         cout<<"After:"<<output<<endl;
         if(isValid(i-1,j)){
              solvecrossword(dictionary,crossword,i-1,j,output,k+1);
         }

         if(isValid(i+1,j)){
             solvecrossword(dictionary,crossword,i+1,j,output,k+1);
         }

         if(isValid(i,j+1)){
             solvecrossword(dictionary,crossword,i,j+1,output,k+1);
         }

         if(isValid(i,j-1)){
              solvecrossword(dictionary,crossword,i,j-1,output,k+1);
         }

         if(isValid(i+1,j-1)){
              solvecrossword(dictionary,crossword,i+1,j-1,output,k+1);
         }

         if(isValid(i+1,j+1)){
              solvecrossword(dictionary,crossword,i+1,j+1,output,k+1);
         }

         if(isValid(i-1,j+1)){
             solvecrossword(dictionary,crossword,i-1,j+1,output,k+1);
         }

         if(isValid(i-1,j-1)){
             solvecrossword(dictionary,crossword,i-1,j-1,output,k+1);
         }

         return;

     }

int main() {
     cin>>n;
     for(int i=0;i<n;i++)
         cin>>dictionary[i];

    cin>>m;

    char crossword[5][5];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>crossword[i][j];
        }
    }
    string output;
    solvecrossword(dictionary,crossword,0,0,output,0);

    set<string>:: iterator itr;
    for(itr = s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }


}
