//
// Created by zy on 5/22/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_TEST4_2_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_TEST4_2_H

#include "Graph.h"
#include <iostream>

using namespace std;

class Test4_2
{
private:
    int n;
    int k;
    Graph times;
public:
    void RunApplication2();

    void getData();

    int networkDelay();
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_TEST4_2_H
