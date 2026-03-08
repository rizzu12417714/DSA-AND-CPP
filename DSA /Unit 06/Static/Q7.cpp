Single File Programming Question
Problem Statement



Ram is tasked with finding the shortest path between two routers in a network represented by a collection of routers connected by links, each with a certain weight. He will input the number of routers, the number of links, and the details of the connections between routers. 



The program will then use Dijkstra’s algorithm to find and print the shortest path from a specified source router to a destination router.

Input format :
The first line contains an integer N, representing the number of routers.

The second line contains an integer M, representing the number of links.

The next M lines each contain three space-separated integers: r1, r2, and w, representing a link between routers r1 and r2 with the given w.

The next line contains an integer, s, representing the source router.

The last line contains an integer d, representing the destination router.

Output format :
The output prints the shortest distances from the source router to all other routers in the network.

Each line should contain two integers separated by a space, representing the router and its distance from the source.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following specifications:

2 ≤ N ≤ 8

1≤ M ≤ 12

0 ≤ w ≤ 7

Sample test cases :
Input 1 :
4
5
0 1 1
0 2 3
1 2 1
1 3 4
2 3 1
0
3
Output 1 :
0 0
1 1
2 2
3 3
Input 2 :
3
3
0 1 2
0 2 4
1 2 1
0
2
Output 2 :
0 0
1 2
2 3




#include <iostream>
#include <climits>
#define MAX_ROUTERS 100
using namespace std;
int minDistance(int dist[], bool sptSet[], int numRouters) {
    int min = INT_MAX, min_index = -1;
    for (int v = 0; v < numRouters; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void printSolution(int dist[], int numRouters) {
    for (int i = 0; i < numRouters; i++)
        cout << i << " " << dist[i] << endl;
}

void dijkstra(int graph[MAX_ROUTERS][MAX_ROUTERS], int src, int numRouters) {
    int dist[MAX_ROUTERS];
    bool sptSet[MAX_ROUTERS];

    for (int i = 0; i < numRouters; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    dist[src] = 0;

    for (int count = 0; count < numRouters - 1; count++) {
        int u = minDistance(dist, sptSet, numRouters);
        sptSet[u] = true;

        for (int v = 0; v < numRouters; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist, numRouters);
}
Footer
int main() {
    int numRouters, numLinks;
    cin >> numRouters >> numLinks;

    int graph[MAX_ROUTERS][MAX_ROUTERS] = {0};

    for (int i = 0; i < numLinks; i++) {
        int router1, router2, weight;
        cin >> router1 >> router2 >> weight;
        graph[router1][router2] = weight;
        graph[router2][router1] = weight; // undirected graph
    }

    int source, destination;
    cin >> source >> destination;

    dijkstra(graph, source, numRouters);

    return 0;
}
