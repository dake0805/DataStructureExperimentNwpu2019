//
// Created by zy on 4/3/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_QUEUE_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_QUEUE_H

struct QueueNode
{
    int data;
    QueueNode *next = nullptr;

    QueueNode(int x)
    {
        data = x;
    }
};

class Queue
{
private:
    QueueNode *front;
    QueueNode *rear;
public:
    Queue();

    bool isEmpty();

    void EnQueue(int x);

    int DeQueue();

    int GetHead();

    void Clear();

};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_QUEUE_H
