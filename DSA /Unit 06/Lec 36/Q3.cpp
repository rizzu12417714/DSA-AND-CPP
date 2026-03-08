Single File Programming Question
Problem Statement



You are designing a maze game where the player explores a maze represented by a graph. The graph consists of interconnected rooms, and the player can navigate through the maze by moving from one room to another. 



To create an immersive gaming experience, you need to implement a Depth First Traversal (DFS) algorithm that simulates the player's movement through the maze.



Example



Input:

4

2 1 3

2 2 0

1 1

1 0



Output:

0 1 2 3 



Explanation:

The input represents a graph with 4 nodes, and the adjacency list of each node is provided.

Node 0 is connected to nodes 1 and 3.

Node 1 is connected to nodes 0 and 2.

Node 2 is connected to node 1.

Node 3 is connected to node 0.

So starting from 0, it will go to 1 then 2, then back to 0 then 0 to 3. Thus DFS will be 0 1 2 3. 

Input format :
The first line of input consists of an integer V, representing the number of rooms in the maze.

The following V lines represent the adjacency list of each room. Each line starts with an integer M, indicating the number of adjacent rooms to the current room, followed by M space-separated integers representing the adjacent rooms.

Output format :
The output prints a space-separated sequence of integers representing the order in which the rooms are visited during the DFS traversal, starting from the entrance of the maze (vertex 0).

Code constraints :
2 ≤ V ≤ 100

0 ≤ M ≤ V-1

The graph is a connected undirected graph.

Sample test cases :
Input 1 :
5
3 2 3 1
1 0
2 0 4
1 0
0
Output 1 :
0 2 4 3 1 
Input 2 :
4
2 1 3
2 2 0
1 1
1 0
Output 2 :
0 1 2 3 





#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[u] = true;
    cout << u << " ";
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v, adj, visited);
        }
    }
}

int main() {
    int V;
    cin >> V;

    vector<vector<int>> adj(V);
    for (int i = 0; i < V; i++) {
        int M;
        cin >> M;
        adj[i].resize(M);
        for (int j = 0; j < M; j++) {
            cin >> adj[i][j];
        }
    }

    vector<bool> visited(V, false);
    dfs(0, adj, visited);

    return 0;
}
