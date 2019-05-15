//
// Created by zy on 5/15/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE841_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE841_H

#include <iostream>

using namespace std;

class LeetCode841
{
public:
    LeetCode841();

    ~LeetCode841();

    void RunApplication1();


private:
    int roomSize;
    int roomKeyNum;
    int **rooms;
    bool *visitedRoom;

    void visitRooms(int room);

    bool canVisitAllRooms();

    void getData();
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE841_H
