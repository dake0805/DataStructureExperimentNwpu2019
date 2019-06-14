//
// Created by zy on 6/14/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_TEST6_2_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_TEST6_2_H


#include <iostream>
#include <string>

using namespace std;

class Test6_2
{
public:
    void RunTest2();

    string LargestNumber(string *array);

    void qSort2(int *&array, int start, int end);

private:
    int n;

    void sort(int *&array, int i, int j);
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_TEST6_2_H
