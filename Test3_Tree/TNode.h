//
// Created by zy on 5/8/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_TNODE_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_TNODE_H

#include <iostream>

class TNode
{
public:
    int value;
    TNode *leftSubT;
    TNode *rightSubT;

    TNode();

    TNode(int x);
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_TNODE_H
