#include <iostream>
#define INFINITY INT_MAX
using namespace std;
class Edge {
    int from;
    int end;
    int value;
public:
    Edge():from(0), end(0), value(0) {}
    Edge(int _from, int _end, int _value): from(_from), end(_end),value(_value){}
    ~Edge(){}
    int get_from() { return from; }
    int get_end() { return end; }
    int get_value() { return value; }
    void setFrom(int _from) { from = _from; }
    void setEnd(int _end) { end = _end; }
    void setValue(int _value) { value = _value; }
};
class G {
    int n; //number of nodes
    int m; //number of edges
    Edge* edges;
public:
    G(int _n, int _m) : n(_n), m(_m), edges(new Edge[m]){}
    int getN() { return n; }
    int getM() { return m; }
    void setN(int _n) { n = _n; }
    void setM(int _m) { m = _m; }
    void addEdge(int i, Edge edge) {edges[i] = edge;}
    Edge* getEdges() { return edges; }
    int* Bellman_Ford(int from);
};