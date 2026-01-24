Single File Programming Question
Problem Statement



You are given a network of nodes, where each node represents a location and is labelled with a unique ID. The network has directed edges that represent the travel times between different locations. Each directed edge (u, v, w) indicates that it takes time w for a signal to travel from location u to location v. The goal is to determine the minimum time it takes for a signal to reach all locations in the network starting from a given source location using the Floyd-Warshall algorithm.



Example 1:





Input:

4

3

2 1 1

2 3 1

3 4 1

2

Output: The minimum time for all nodes to receive the signal is: 2



Explanation: In the given sample test case, we have a directed graph with 4 nodes and 3 edges. The edges are as follows:

Edge 1: Node 2 to Node 1 with a weight of 1.

Edge 2: Node 2 to Node 3 with a weight of 1.

Edge 3: Node 3 to Node 4 with a weight of 1.



We need to find the minimum time it takes for a signal to reach all nodes starting from node 2 (k = 2). To solve this, we use the Floyd-Warshall algorithm to calculate the shortest paths between all pairs of nodes. We initialise the distance matrix with a large value (MAX_VALUE) for all pairs of nodes except for the diagonal, which is set to 0. 



After running the Floyd-Warshall algorithm, we get the updated distance matrix, where each entry represents the minimum distance between two nodes. The entry at distance_matrix[2][4] represents the shortest path from node 2 to node 4, which is 2. Hence, the minimum time for all nodes to receive the signal starting from node 2 is 2.

Therefore, the output of the given sample test case is: "The minimum time for all nodes to receive the signal is: 2".



Example 2:



Input:

2

1

1 2 1

2



Output: -1



Explanation: This example represents a network of two nodes with a single directed edge from Node 1 to Node 2. The edge has a weight of 1, indicating the time required for a signal to travel from Node 1 to Node 2. The task is to find the minimum time for all nodes to receive the signal starting from Node 2.



In this case, there is only one direct path from Node 1 to Node 2, so the signal can reach Node 2 directly in 1 unit of time. However, there is no direct path from Node 2 to Node 1. Therefore, it is not possible for all nodes to receive the signal starting from Node 2. Hence, the output is -1, indicating that it is not possible to achieve the desired network delay time.



To summarise, the signal can only be transmitted from Node 1 to Node 2, but not in the reverse direction. Therefore, it is not possible for all nodes to receive the signal starting from Node 2, resulting in an output of -1.

Input format :
The first two line contains two integers n and m separated by a new line, representing the number of nodes and the number of directed edges in the network, respectively.

The next m lines contain three integers ui, vi, and wi separated by spaces, representing the directed edge from node ui to node vi with travel time wi.

The last line contains an integer k, representing the source node from which the signal is sent.

Output format :
The output prints "The minimum time for all nodes to receive the signal is: ", followed by the minimum time it takes for a signal to reach all locations in the network from the source location.

If it is impossible for the signal to reach all locations, print "The minimum time for all nodes to receive the signal is: -1".



Refer to the sample output for format specifications.

Code constraints :
1 ≤ k ≤ n ≤ 100

1 ≤ times.length ≤ 6000

times[i].length == 3

1 ≤ ui, vi ≤ n

ui != vi

0 ≤ wi ≤ 100

All the pairs (ui, vi) are unique. (i.e., no multiple edges.)

Sample test cases :
Input 1 :
4
3
2 1 1
2 3 1
3 4 1
2
Output 1 :
The minimum time for all nodes to receive the signal is: 2
Input 2 :
2
1
1 2 1
1
Output 2 :
The minimum time for all nodes to receive the signal is: 1
Input 3 :
2
1
1 2 1
2
Output 3 :
The minimum time for all nodes to receive the signal is: -1




#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    const long long INF = 1e18;
    vector<vector<long long>> dist(n + 1, vector<long long>(n + 1, INF));

    for (int i = 1; i <= n; i++) {
        dist[i][i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
    }

    int k;
    cin >> k;

    for (int mid = 1; mid <= n; mid++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dist[i][mid] != INF && dist[mid][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][mid] + dist[mid][j]);
                }
            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        if (dist[k][i] == INF) {
            cout << "The minimum time for all nodes to receive the signal is: -1";
            return 0;
        }
        ans = max(ans, dist[k][i]);
    }

    cout << "The minimum time for all nodes to receive the signal is: " << ans;
    return 0;
}
