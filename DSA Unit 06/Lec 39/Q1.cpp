Single File Programming Question
Problem Statement



You are working for a transportation company that provides emergency medical services in a city. Your task is to develop a program to optimize the routes for emergency vehicles (such as ambulances) to reach incident locations quickly while considering factors such as road conditions and distance.



The city is represented as a graph, where each intersection is a node and each road segment is an edge. Each edge has an associated weight representing the distance between intersections. 



Your program should find the shortest route for emergency vehicles to reach incident locations and the amount charged for the service using the Bellman-Ford algorithm.



Note: Assume that for each kilometer Rs. 25 is charged for the service.

Input format :
The first line contains two integers N and M, where N is a number of nodes and M is the number of connections in the road network

The next M lines each line contains three space-separated integers: the source node, the destination node, and the distance (weight) between them in kilometers.

The last line contains two space-separated integers S and D representing the source node and the destination node for which the shortest route needs to be found.

Output format :
The first line of output prints "Diatance of Quickest route: X km" where X is an integer representing the shortest route from the source node to the destination node in terms of distance.

The second line of output prints "Charges applicable: Rs. " followed by an integer representing the charges applicable for the shortest route, considering a charge of Rs. 25 per kilometer.



Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N, M ≤ 10

1 ≤ S, D ≤ 10

Sample test cases :
Input 1 :
5 8
0 1 5
0 2 3
1 3 6
1 2 2
2 4 4
3 4 6
3 2 7
4 0 3
1 4
Output 1 :
Distance of Quickest route: 6 km
Charges applicable: Rs. 150
Input 2 :
4 5
0 1 1
0 2 4
1 3 3
2 3 2
3 0 1
2 3
Output 2 :
Distance of Quickest route: 2 km
Charges applicable: Rs. 50




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

    int distance = dist[D];
    int charges = distance * 25;

    cout << "Distance of Quickest route: " << distance << " km" << endl;
    cout << "Charges applicable: Rs. " << charges;

    return 0;
}
