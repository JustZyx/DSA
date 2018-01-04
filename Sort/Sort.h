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
    void _bubbleSort()  //冒泡排序
    {
        for (int j = _right-1; j >= 0 ; --j) {
            int flag = 0;   //标志位
            for (int i = 0; i <= j ; ++i) { //j-每轮遍历终点
                if (Arr[i] > Arr[i + 1]) {
                    _swap(Arr[i], Arr[i+1]);
                    flag = 1;
                }
            }
            if (!flag) {    //如果第一轮没有交换操作则有序
                break;
            }
        }
    }
    void _insertSort()  //插入排序
    {
        for (int i = 1; i <= _right; i++) { //从第2张开始一直到最后一张
            int _onHand = Arr[i]; //手上的牌
            int j = i;
            for (; j > 0 && Arr[j - 1] > _onHand ; j--) {
                Arr[j] = Arr[j-1];
            }
            Arr[j] = _onHand;
        }
    }
    void _shellSort()   //希尔排序
    {
        for (int D = (_right - _left) / 2; D > 0; D /= 2) {
            for (int i = D; i <= _right; i++) {
                int _onHand = Arr[i];
                int j = i;
                for (; j >= D && Arr[j - D] > _onHand; j = j - D) {
                    Arr[j] = Arr[j - D];
                }
                Arr[j] = _onHand;
            }
        }
    }
    void var_dump()    //输出数组
    {
        for (int i = 0; i <= _right; ++i) {
            std::cout << Arr[i] << " ";
        }
        std::cout << std::endl;
    }
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
