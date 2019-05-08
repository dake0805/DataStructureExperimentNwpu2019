//
// Created by zy on 5/8/2019.
//

#include "TNode.h"

TNode::TNode()
{
    value = 0;
    leftSubT = nullptr;
    rightSubT = nullptr;
}

TNode::TNode(int x)
{
    value = x;
    leftSubT = nullptr;
    rightSubT = nullptr;
}