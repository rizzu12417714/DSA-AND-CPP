Single File Programming Question
Problem Statement



You are given a map of a city with various locations represented as vertices in an edge-weighted undirected graph. The edge weights represent the distances between the locations. 



Your task is to find the shortest distances between every pair of locations using the Floyd-Warshall Algorithm.

Input format :
The first line of input contains an integer V, representing the number of locations in the city.

The second line contains integer edges, representing the number of connections between the locations.

The next edge lines contain three space-separated integers: start, end, and value, representing a connection between the start location and the end location with the given distance value.

Output format :
The first line prints: Original matrix

followed by a V × V matrix where each value represents the initial distances between locations.

For every pair (i, j):

Print 0 if i = j
Print the edge weight if a direct connection exists
Print INF if no direct connection exists
Each row ends with a space.

After printing the original matrix, print a blank line.

Then print: Shortest path matrix

followed by a V × V matrix containing the shortest distances between all pairs of locations computed using the Floyd–Warshall algorithm.

For each pair (i, j):

Print the shortest distance if reachable
Print INF if no path exists
Each row ends with a space.


Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ V ≤ 100 (number of locations in the city)

0 ≤ edges ≤ V * (V - 1) / 2 (number of connections between locations)

0 ≤ start, end < V (indices of locations)

0 ≤ value ≤ 999 (distance between locations)

The graph is undirected, so the distance from location A to location B is the same as the distance from location B to location A.

If two locations are not directly connected, the distance between them is considered infinite (INF = 999).

Sample test cases :
Input 1 :
4
3
0 1 2
1 2 3
2 3 4
Output 1 :
Original matrix
0 2 INF INF 
2 0 3 INF 
INF 3 0 4 
INF INF 4 0 

Shortest path matrix
0 2 5 9 
2 0 3 7 
5 3 0 4 
9 7 4 0 
Input 2 :
5
5
0 1 2
0 2 7
1 2 3
2 3 4
3 4 5
Output 2 :
Original matrix
0 2 7 INF INF 
2 0 3 INF INF 
7 3 0 4 INF 
INF INF 4 0 5 
INF INF INF 5 0 

Shortest path matrix
0 2 5 9 14 
2 0 3 7 12 
5 3 0 4 9 
9 7 4 0 5 
14 12 9 5 0 



#include <bits/stdc++.h>
using namespace std;

int main() {
    int V;
    cin >> V;

    int edges;
    cin >> edges;

    const int INF = 999;
    vector<vector<int>> dist(V, vector<int>(V, INF));

    for (int i = 0; i < V; i++) {
        dist[i][i] = 0;
    }

    for (int i = 0; i < edges; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
        dist[v][u] = w;
    }

    cout << "Original matrix" << endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Shortest path matrix" << endl;

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
