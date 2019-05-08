//
// Created by zy on 5/8/2019.
//

#include "Test3_1.h"

int Test3_1::SumNumbers(TNode *tree)
{
    Stack stack;            //使用栈来存树的节点
    resultLinkedList = new LinkListNode(0);     //存储从根节点到每个树叶节点的结果
    currPointer = resultLinkedList;
    if (!tree)      //空树返回0
        return 0;
    stack.Push(tree);
    /**
     * 循环开始之前把根节点入栈
     * 循环的结束条件是栈空
     * 每次循环出栈栈顶的节点
     * 如果：该节点不是树叶节点
     *      把当前节点的值*10 加到左右子节点中（如果有）
     *      然后把被加了这个值的子节点入栈，作为下次循环的根节点
     * 如果：该节点是树叶节点
     *      之前循环中非树叶节点会对其子节点进行计算，树叶节点当前的值就是结果之一
     *      加入 resultLinkedList 中
     *      最后求和就是结果
     */
    while (!stack.isEmpty())
    {
        TNode *t = stack.Pop();
        if (t->leftSubT)
        {
            t->leftSubT->value += t->value * 10;
            stack.Push(t->leftSubT);
        }
        if (t->rightSubT)
        {
            t->rightSubT->value += t->value * 10;
            stack.Push(t->rightSubT);
        }
        if (!t->leftSubT && !t->rightSubT)
        {
            AddResult(t->value);
        }
    }
    int sum = 0;
    while (resultLinkedList != nullptr)
    {
        sum += resultLinkedList->val;
        resultLinkedList = resultLinkedList->next;
    }
    stack.Clear();
    return sum;
}

/**
 * 把结果之一加入链表中，用于最后求和
 * @param x 算出的结果之一
 */
void Test3_1::AddResult(int x)
{
    currPointer->next = new LinkListNode(x);
    currPointer = currPointer->next;
}

/**
 * 题目所给样例的树进行测试
 */
void Test3_1::RunApplication()
{
    TNode *treeExample1 = new TNode(1);
    treeExample1->leftSubT = new TNode(2);
    treeExample1->rightSubT = new TNode(3);
    cout << SumNumbers(treeExample1) << endl;

    TNode *treeExample2 = new TNode(4);
    treeExample2->leftSubT = new TNode(9);
    treeExample2->rightSubT = new TNode(0);
    treeExample2->leftSubT->leftSubT = new TNode(5);
    treeExample2->leftSubT->rightSubT = new TNode(1);
    cout << SumNumbers(treeExample2) << endl;

}

