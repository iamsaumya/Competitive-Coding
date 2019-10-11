#include <bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    public:
        Graph(int v){
            V = v;
            adj =  new list<int>[V];
        }
    
    void addEdge(int,int, bool);
    void printGraph();
};

void Graph::addEdge(int u, int v, bool bidir=true){
     adj[u].push_back(v);
     if(bidir == true){
         adj[v].push_back(u);
     }
}

void Graph::printGraph(){

    for(int i=0;i<V;i++){
        cout<<i<<"->";
        for(auto val : adj[i]){
            cout<<val<<",";
        }
        cout<<endl;
    }
}


int main() {
    Graph g(5);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(4,3);
    g.addEdge(2,3);
    g.printGraph();
}
