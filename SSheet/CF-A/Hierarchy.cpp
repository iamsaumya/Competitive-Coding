#include <bits/stdc++.h>
using namespace std;
int n,k;
vector<int>ordering;
bool visited[1000001];
vector<vector<int>>adj;

void dfshelper(int node){
    visited[node] =  true;
    for( auto neighbour: adj[node]){
        if(!visited[neighbour])
          dfshelper(neighbour);
    }
    ordering.push_back(node);
}

void TopologicalSortUsingDFS(){
    int parent[1000001];
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfshelper(i);
        }
    }

    int sizetopo=ordering.size();
    int p = 0;

    for(int i = sizetopo-1;i>=0;i--){
            parent[ordering[i]] = p;
            p = ordering[i];
    }

    for(int i=1;i<=n;i++){
        printf("%d\n",parent[i]);
    }
}
int main() {

    scanf("%d%d", &n, &k);


    adj.resize(n+1);
    memset(visited,false,sizeof(visited));

    for(int i =1;i<=k;i++){
        int a,b;
        scanf("%d",&a);
        for(int j = 0;j<a;j++){
            scanf("%d",&b);
            adj[i].push_back(b);
        }
    }
    TopologicalSortUsingDFS();
}
