#include <iostream>
#include <fstream>
#include "class.h"
using namespace std;
int main(){
    cout << "Enter the file name: ";
    string filename;
    cin >> filename;
    ifstream in(filename);
    if(!in.good()) {
        cout << "This file doesn't exist\n";
        return 0;
    }
    ofstream out("result.txt");
    int n, m, node; //n - number of nodes, m - number of edges
    in >> n >> m >> node;
    G graph(n, m);
    int from, end, value;
    for (int i = 0; i < m; i++) {
        in >> from >> end >> value;
        graph.addEdge(i, Edge(from, end, value));
    }
    int* distances = graph.Bellman_Ford(node);
    out<<"Paths for "<<node<<" node:\n";
    for (int i = 1; i < n; i++) out << "Minimal cost of the path to " << i << ": " << distances[i] << endl;
    cout<<"\nNow, check the result.txt file\n";
    in.close();
    out.close();
}