//
// Created by zy on 4/10/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_TEST2_1_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_TEST2_1_H


#include <iostream>
#include "Stack.h"

class Test2_1
{
private:
    int n1;
    int n2;
    int *nums1;
    int *nums2;
public:
    Test2_1();

    Test2_1(int n1, int n2);

    ~Test2_1();

    void MainApplication();

    void RunApplication();

    void RunApplication(int *nums1, int *nums2);

    void TestExample_Test1();

    void InputArrayElements();

    int FindNum(int x);
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_TEST2_1_H
