#include <iostream>
using namespace std;

/* Example input:
Enter the number of nodes in the graph: 5
Enter the number of edges in the graph: 7
Enter the edges in the format (node1 node2):
0 1
0 2
1 3
2 4
3 4
3 2
4 0
*/

const int MAX_NODES = 10;

int main() {
    int adjMatrix[MAX_NODES][MAX_NODES] = {0};  // Initialize adjacency matrix with 0s

    int numNodes, numEdges;
    cout << "Enter the number of nodes in the graph (up to " << MAX_NODES << "): ";
    cin >> numNodes;

    // Check if the number of nodes exceeds the maximum limit
    if (numNodes > MAX_NODES) {
        cout << "Number of nodes exceeds the maximum limit of " << MAX_NODES << "." << endl;
        return 0;
    }

    cout << "Enter the number of edges in the graph: ";
    cin >> numEdges;

    cout << "Enter the edges in the format (node1 node2):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int node1, node2;
        cin >> node1 >> node2;

        // Check if the entered node numbers are within the valid range
        if (node1 < 0 || node1 >= numNodes || node2 < 0 || node2 >= numNodes) {
            cout << "Invalid node number. Please enter valid node numbers within the range." << endl;
            return 0;
        }

        // Update the adjacency matrix to represent the edge between node1 and node2
        adjMatrix[node1][node2] = 1;
        adjMatrix[node2][node1] = 1;
    }

    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < numNodes; ++i) {
        for (int j = 0; j < numNodes; ++j) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



