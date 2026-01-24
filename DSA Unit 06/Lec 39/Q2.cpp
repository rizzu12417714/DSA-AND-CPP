Single File Programming Question
Problem Statement



You are tasked with optimizing resource allocation in a grid computing environment, which involves allocating computing resources such as servers or virtual machines by finding the shortest paths for data transfer and task execution. This optimization process considers factors such as network latency and resource availability.



Write a program that takes input for the grid computing environment, including the number of nodes (computing resources) and the network connections between them. Each node represents a computing resource, and each connection represents a network link between two nodes. 



The program should also take input for the source node (starting point) and the destination node (target) for task execution using the Bellman-Ford algorithm.

Input format :
The first line contains two integers N and M, where N represents the number of nodes in the network and M represents the number of connections between nodes.

The next M lines each contain three integers u, v, and latency, representing a connection between node u and node v with a latency of latency units.

The last line contains two integers S and D, representing the source node and the destination node for which the shortest latency is to be found.

Output format :
The output prints "Shortest latency: X units" where X is an integer representing the shortest latency from the source node to the destination node.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N, M ≤ 10

1 ≤ u, v, latency ≤ 10

1 ≤ S, D ≤ 10

Sample test cases :
Input 1 :
3 3
0 1 5
1 2 3
0 2 2
0 2
Output 1 :
Shortest latency: 2 units
Input 2 :
4 4
0 1 3
1 2 4
2 3 2
0 3 6
1 3
Output 2 :
Shortest latency: 6 units




#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<tuple<int,int,int>> edges;
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int S, D;
    cin >> S >> D;

    const int INF = 1e9;
    vector<int> dist(N, INF);
    dist[S] = 0;

    for (int i = 1; i <= N - 1; i++) {
        for (auto &e : edges) {
            int u, v, w;
            tie(u, v, w) = e;
            if (dist[u] != INF && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    cout << "Shortest latency: " << dist[D] << " units";

    return 0;
}
