//
// Created by zy on 4/10/2019.
//



#include "Test2_1.h"

using namespace std;
/**
 * 第一部分 第一题
 * You are given two arrays (without duplicates) nums1 and nums2 where nums1’s elements are subset of nums2. Find all the next greater numbers for nums1's elements in the corresponding places of nums2.
   The Next Greater Number of a number x in nums1 is the first greater number to its right in nums2. If it does not exist, output -1 for this number.
 */


//无参数的构造函数，通过控制台输入数据
//n1 n2 是数组nums1,nums2的长度
Test2_1::Test2_1()
{
    cout << "Input number of elements: n1, n2" << endl;
    cin >> n1 >> n2;
    nums1 = new int[n1];
    nums2 = new int[n2];
}

Test2_1::Test2_1(int n1, int n2)
{
    this->n1 = n1;
    this->n2 = n2;
}

Test2_1::~Test2_1()
{
    delete nums1;
    delete nums2;
}

void Test2_1::InputArrayElements()
{
    cout << "Input elements of array" << endl;
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];
}

void Test2_1::RunApplication(int *nums1, int *nums2)
{
    this->nums1 = nums1;
    this->nums2 = nums2;
    MainApplication();
}

void Test2_1::RunApplication()
{
    InputArrayElements();
    MainApplication();
    return;
}

void Test2_1::MainApplication()
{
    for (int i = 0; i < n1; i++)
    {
        cout << FindNum(nums1[i]) << " ";
    }
    cout << endl;
    return;
}

/**
 *  通过遍历nums1的元素，并对每个元素寻找符合条件的nums2中的元素
 *  时间复杂度为 O(n^2)
 * @param x 要找的原数字 对应nums1[i]
 * @return 找到的nums2中的结果
 */
int Test2_1::FindNum(int x)
{
    int index = -1;
    for (int i = 0; i < n2; i++)
    {
        if (nums2[i] == x)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        return index;
    for (int i = index; i < n2; i++)
    {
        if (nums2[i] > x)
            return nums2[i];
    }
    return -1;
}

void TestExample_Test1()
{
    int array1_1[] = {4, 1, 2};
    int array1_2[] = {1, 3, 4, 2};
    Test2_1 test21(3, 4);
    test21.RunApplication(array1_1, array1_2);
    cout << "Correct answer should be [-1,3,-1]" << endl;
    int array2_1[] = {2, 4};
    int array2_2[] = {1, 2, 3, 4};
    Test2_1 test22(2, 4);
    test22.RunApplication(array2_1, array2_2);
    cout << "Correct answer should be [3,-1]" << endl;
    return;
}

//通过控制台输入数据运行
void RunTest1()
{
    Test2_1 test21;
    test21.RunApplication();
    return;
}


/*void test2_1()
{
    int n1, n2;
    cin >> n1 >> n2;
    int *nums1 = new int[n1];
    int *nums2 = new int[n2];
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];
    for (int i = 0; i < n1; i++)
    {
        cout << find(nums1[i], nums2, n2) << " ";
    }
}*/

/*
int find(int x, int *nums2, int n)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums2[i] == x)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        return index;
    for (int i = index; i < n; i++)
    {
        if (nums2[i] > x)
            return nums2[i];
    }
    return -1;
}

void TestExample_Test1()
{
    int array1_1[] = {4, 1, 2};
    int array1_2[] = {1, 3, 4, 2};
    test2_1()
}
*/
