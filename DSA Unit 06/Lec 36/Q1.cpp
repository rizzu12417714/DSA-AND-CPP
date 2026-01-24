Single File Programming Question
Problem Statement



You are building a social networking platform that connects users based on their city of residence. Each city is represented as a vertex, and there is a connection between the two cities if they have users who are friends or have mutual connections. A province is defined as a group of cities where users can directly or indirectly connect with each other. Your task is to develop an algorithm using Depth-First Search (DFS) to determine the number of provinces in the network.



Write a program that takes input as the number of cities (vertices) in the network and an adjacency matrix representing the connections between cities. The adjacency matrix will be a binary matrix, where 1 indicates a connection between cities, and 0 indicates no connection. Implement the DFS algorithm to traverse the graph and count the number of provinces. Finally, output the total number of provinces in the network.



Example 1:

Input:

3

1 0 1

0 1 0

1 0 1

Output:

2

Explanation:

The graph clearly has 2 Provinces [1,3] and [2]. As city 1 and city 3 have a path between them, they belong to a single province. City 2 has no path to City 1 or City 3, hence it belongs to another province.



Example 2:

Input:

2

1 1

1 1

Output:

1

Input format :
The first line of input contains an integer V, representing the number of vertices (cities).

The next V lines contain V space-separated integers, forming the adjacency matrix of the graph.

Output format :
The output prints an integer representing the number of provinces in the graph.



Refer to the sample output for formatting specifications.

Code constraints :
The number of cities (vertices) in the network is between 1 and 100.

The adjacency matrix is a square matrix of size N x N, where N is the number of cities.

Each element in the adjacency matrix is either 0 or 1.

Sample test cases :
Input 1 :
2
1 1
1 1
Output 1 :
1
Input 2 :
3
1 0 1
0 1 0
1 0 1
Output 2 :
2
Input 3 :
3
1 1 1
1 1 1
1 1 1
Output 3 :
1



#include <bits/stdc++.h>
using namespace std;

void dfs(int u, vector<vector<int>> &adj, vector<bool> &visited, int V) {
    visited[u] = true;
    for (int v = 0; v < V; v++) {
        if (adj[u][v] == 1 && !visited[v]) {
            dfs(v, adj, visited, V);
        }
    }
}

int main() {
    int V;
    cin >> V;

    vector<vector<int>> adj(V, vector<int>(V));
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> adj[i][j];
        }
    }

    vector<bool> visited(V, false);
    int provinces = 0;

    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            provinces++;
            dfs(i, adj, visited, V);
        }
    }

    cout << provinces;
    return 0;
}
