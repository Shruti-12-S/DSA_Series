#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V; // number of vertices
    list<int> *l; // int *arr
    

public:
    Graph(int V){
        this->V=V;
        l = new list<int> [V];
        //arr = new int[V];
        vector<bool> vis(V, false);
    }

    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u); // for undirected graph
    }


 
    //DFS Traversal
    void dfsHelper(int u, vector<bool> &vis){
        cout<<u<<" ";
        vis[u] = true;

        for(int v: l[u]){ //v->immediate neighbour of u
            if(!vis[v]){
                dfsHelper(v, vis);
            }
        }
    }

    void dfs(){
        int src=0;
        vector<bool> vis(V, false);

        //disconnected graph
        // for(int i=0;i<V;i++){
        //     if(!vis[i]){
        //         dfsHelper(i, vis);
        //     }
        // }

        dfsHelper(src, vis);
        cout<<endl;
    }
};

int main(){
    // Graphs are a collection of nodes (vertices) and edges connecting them.
    // They can be directed or undirected, weighted or unweighted.      
    // Graphs can be represented using an adjacency list or an adjacency matrix.    
    // Adjacency List: Each vertex has a list of its adjacent vertices. This is more space-efficient for sparse graphs.
    // Adjacency Matrix: A 2D array where the entry at row i and column j indicates the presence (and possibly weight) of an edge between vertices i and j. This is more space-efficient for dense graphs.
    // Graph traversal algorithms include Depth-First Search (DFS) and Breadth-First Search (BFS). DFS explores as far as possible along each branch before backtracking, while BFS explores all neighbors at the present depth before moving on to nodes at the next depth level.  
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);

    g.dfs();
    return 0;
}