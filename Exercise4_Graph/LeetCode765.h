//
// Created by zy on 5/15/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE765_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE765_H

#include <iostream>

using namespace std;

class LeetCode765
{
public:
    LeetCode765();

    ~LeetCode765();

    void RunApplication2();

private:
    int minSwapsCouples();

    void swap(int i, int j);

    int row[100] = {0};
    int rowSize = 0;

};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE765_H
