#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>>adj;
    public:
    void addEdge(T src, T dest, bool bidir){
       adj[src].push_back(dest);
       if(bidir){
           adj[dest].push_back(src);
       }
   }

  int bfs(T node){
      queue<T>q;
      int distance[50];
      for(int i = 0;i<50;i++){
        distance[i] = INT_MAX;
      }
      q.push(node);

      distance[node] = 0;
      while(!q.empty()){
          T temp = q.front();
        //  cout<<temp<<"-> ";
          q.pop();
          for( auto neighbour: adj[temp]){
              if(distance[neighbour]==INT_MAX){
                   //cout<<neighbour<<",";
                   distance[neighbour] = distance[temp] + 1;
                   q.push(neighbour);
              }
          }
         // cout<<endl;
     }
     return distance[36];
  }
};

int main() {
    Graph<int>g;
    int board[50];
    memset(board,0,sizeof(board));
    board[2] = 13;
    board[5] = 2;
    board[9] = 18;
    board[18] = 11;
    board[17] = -13;
    board[20] = -14;
    board[24] = -8;
    board[25] = -10;
    board[32] = -2;
    board[34] = -22;

    for(int i = 0;i<36;i++){
        for(int dice=1;dice<=6;dice++){
            if(i+dice<=36){
                int v = i + dice + board[i + dice];
                g.addEdge(i,v,false);
            }
        }
    }
    cout<<g.bfs(0);
}
