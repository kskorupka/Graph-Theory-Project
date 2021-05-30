#include <iostream>
#include "class.h"
#define INFINITY INT_MAX
using namespace std;
int * G::Bellman_Ford(int from){
    int* distances = (int*)malloc(n * sizeof(int));
    distances[0] = 0;
    int _from,_end,_value;
    for (int i = 1; i < n; i++) distances[i] = INFINITY; //set each distance from nodes to infinity
    for (int node = 1; node < n; node++) {
        for (int edge = 0; edge < m; edge++) {
            _from = this->getEdges()[edge].get_from(); _end = this->getEdges()[edge].get_end(); _value = this->getEdges()[edge].get_value();
            if (distances[_from] != INFINITY && distances[_end] > distances[_from] + _value) distances[_end] = distances[_from] + _value;
        }
    }
    return distances;
}