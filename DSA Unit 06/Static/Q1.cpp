Single File Programming Question
Problem Statement



John, a logistics manager, is tasked with finding the shortest delivery route between two warehouses in a city using Dijkstra's algorithm. The city's road network is represented as a graph, where intersections are nodes and roads are weighted edges. 



Help John determine the quickest route between the two warehouses based on the provided road network.

Input format :
The first line of input consists of an integer n, representing the number of intersections in the city.

The second line of input consists of an integer m, representing the number of roads connecting intersections.

The next m lines each contain three integers u, v, and w, where u and v are two intersections connected by a road of weight w.

The last two lines consist of integers source and destination, which represent the starting and destination intersections, respectively.

Output format :
If a path exists, the first line of output prints "Shortest path: " followed by the shortest path from the source to the destination, with each intersection separated by " -> ".

The second line prints "Shortest distance: " followed by the total distance of the shortest path.

If no path exists, output "No path found".



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following specifications:

1 ≤ n ≤ 100

1 ≤ m ≤ 100

0 ≤ u, v < n

0 ≤ w ≤ 100

0 ≤ s, d < n

Sample test cases :
Input 1 :
4
5
0 1 2
0 2 4
1 2 1
1 3 7
2 3 3
0
3
Output 1 :
Shortest path: 0 -> 1 -> 2 -> 3
Shortest distance: 6
Input 2 :
5
7
0 1 2
0 2 6
0 3 1
1 2 3
1 4 5
2 3 2
3 4 1
0
4
Output 2 :
Shortest path: 0 -> 3 -> 4
Shortest distance: 2
Input 3 :
3
2
0 1 5
1 2 3
0
2
Output 3 :
Shortest path: 0 -> 1 -> 2
Shortest distance: 8
Input 4 :
5
4
0 1 2
0 3 3
1 3 4
0 2 5
0
4
Output 4 :
No path found




#include <iostream>
#include <climits>
using namespace std;

#define MAX_VERTICES 100
#define INF INT_MAX

int graph[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int distanceArr[MAX_VERTICES];
int previous[MAX_VERTICES];

void dijkstra(int source, int destination, int n) {
    for (int i = 0; i < n; i++) {
        distanceArr[i] = INF;
        visited[i] = 0;
        previous[i] = -1;
    }

    distanceArr[source] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = -1, minDist = INF;
        for (int i = 0; i < n; i++) {
            if (!visited[i] && distanceArr[i] < minDist) {
                minDist = distanceArr[i];
                u = i;
            }
        }

        if (u == -1) break;
        visited[u] = 1;

        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] != INF && distanceArr[u] != INF &&
                distanceArr[u] + graph[u][v] < distanceArr[v]) {
                distanceArr[v] = distanceArr[u] + graph[u][v];
                previous[v] = u;
            }
        }
    }

    if (distanceArr[destination] == INF) {
        cout << "No path found";
        return;
    }

    int path[MAX_VERTICES], len = 0;
    for (int v = destination; v != -1; v = previous[v])
        path[len++] = v;

    cout << "Shortest path: ";
    for (int i = len - 1; i >= 0; i--) {
        cout << path[i];
        if (i != 0) cout << " -> ";
    }
    cout << endl;
    cout << "Shortest distance: " << distanceArr[destination];
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = INF;
        }
    }

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
        graph[v][u] = w;
    }

    int source, destination;
    cin >> source;
    cin >> destination;

    dijkstra(source, destination, n);
    return 0;
}
