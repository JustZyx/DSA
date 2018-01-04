//
// Created by 庄永新 on 2017/12/26.
//

#ifndef DSA_SORT_H
#define DSA_SORT_H

#include <iostream>

//排序类
class Sort
{
public:
    Sort(int *A, int _left, int _right) : Arr(A), _left(_left), _right(_right) {}
    void _bubbleSort();  //冒泡排序
    void _insertSort();  //插入排序
    void _shellSort();   //希尔排序
    void var_dump();    //输出数组
protected:
    void _swap(int &a, int &b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
private:
    int *Arr;
    int _left;  //0
    int _right; //_len-1
};

#endif //DSA_SORT_H
