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
  
  void bfs(T node){
      queue<T>q;
      map<T,bool>visited;
      q.push(node);
      visited[node]=true;
      cout<<node<<endl;
      while(!q.empty()){
          T temp = q.front();
          q.pop();
          for( auto neighbour: adj[temp]){
              if(!visited[neighbour])
                   cout<<neighbour<<endl;
                   visited[neighbour] = true;
                   q.push(neighbour);
          }      
      }
  }
};

int main() {
    Graph<string>g;
    g.addEdge("Putin","Trump",false);
    g.addEdge("Putin","Modi",false);
    g.addEdge("Putin","Pope",false);
    g.addEdge("Modi","Trump",true);
    g.addEdge("Modi","Yogi",true);
    g.bfs("Putin");
}
