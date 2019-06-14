//
// Created by zy on 6/14/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_TEST6_1_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_TEST6_1_H


#include <iostream>

using namespace std;


struct data
{
    int first = 0;
    int second = 0;
};

class Test6_1
{
private:
    data *array = nullptr;
    int nums = 0;       //number of arrays;

    void qSortRecursion(data *&array, int start, int end);

    void swap(data *&array, int i, int j);

public:
    void RunTest1();

    void merge(data *array);

    void qSort(data *&array, int n);


};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_TEST6_1_H
