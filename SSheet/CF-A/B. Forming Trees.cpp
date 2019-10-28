#include <bits/stdc++.h>
using namespace std;
bool visited[101];

// From the question we know that a node can have maximum two edges, then we draw chains and cycles of nodes having two edges and we found that whenever it has odd cycle 
// or odd chain we have to eliminate one node. Therefore we are first checking for cycle and then if we found a cycle, we check whether it is even or odd then we update 
// toremove accordingly.

// At the end we are also checking for to remove nodes if we cannot divides remaining nodes into two halves. It helps us to eliminate the odd chain condition. 
class Graph{
    map<int,list<int>>adj;
    public:
    void addEdge(int a, int b , bool bidir = true){
         adj[a].push_back(b);
         if(bidir){
             adj[b].push_back(a);
         }
     }
     
     int dfs(int currnode, int parnode, int &countedge){
         if(visited[currnode]){
             return 1;
         }
         visited[currnode] = 1;
         for(auto i:adj[currnode]){
             if(i!=parnode){
                  countedge++;
                  if(dfs(i,currnode,countedge)==1){
                      return 1;
                  }
             }
         }
         return  0;
     }
};

int main() {
    int n,m;
    cin>>n>>m;
    Graph g;
    memset(visited,false,sizeof(visited));

    for(int i = 0;i<m;i++){
        int a, b;
        cin>>a>>b;
        --a;
        --b;
        g.addEdge(a,b);
    }
    int toremove = 0;
    for(int i = 0;i<n;i++){
         int countedges = 0;
         int cyclepresent = g.dfs(i,-1,countedges);
         if(cyclepresent){
             toremove += countedges%2;
         }
    }
    if((n-toremove)%2==1)
       toremove++;
    
    cout<<toremove<<endl;
}
