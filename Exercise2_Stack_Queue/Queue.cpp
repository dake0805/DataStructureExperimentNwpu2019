//
// Created by zy on 4/3/2019.
//
#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
}

bool Queue::isEmpty()
{
    if (front == nullptr || rear == nullptr)
        return true;
    return false;
}

void Queue::EnQueue(int x)
{
    QueueNode *newNode = new QueueNode(x);
    newNode->next = nullptr;
    if (rear == nullptr)
    {
        rear = newNode;
        front = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
    return;
}

int Queue::DeQueue()
{
    if (isEmpty())
    {
        cout << "Queue is empty now" << endl;
        return -1;
    }
    QueueNode *oldNode = front;
    int element = front->data;
    front = front->next;
    delete oldNode;
    return element;
}

int Queue::GetHead()
{
    if (isEmpty())
    {
        cout << "Queue is empty now" << endl;
        return -1;
    }
    return front->data;
}

void Queue::Clear()
{
    while (!isEmpty())
        DeQueue();
}