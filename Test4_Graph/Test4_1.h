//
// Created by zy on 5/22/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_TEST4_1_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_TEST4_1_H

#include "GraphNode.h"
#include "Graph.h"

#include <iostream>

class Test4_1
{
private:
    int courseNum;
    Graph graph;
    vector<int> result;

    vector<int> record;

    vector<vector<int>> pre;

public:
    vector<int> findOrder();

    bool dfs(int i);

    void getData();

    void RunApplication1();
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_TEST4_1_H
