//
// Created by zy on 5/22/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_GRAPHNODE_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_GRAPHNODE_H


#include <string>
#include <vector>

using namespace std;

class GraphNode
{
public:
    string id;
    vector<GraphNode *> neighborNodes;

    GraphNode(string label);
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_GRAPHNODE_H
