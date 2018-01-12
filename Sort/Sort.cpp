//
// Created by 庄永新 on 2017/12/26.
//

#include "Sort.h"

//选择排序
void Sort::_selectSort()
{
    for (int i = _left; i <= _right; ++i) {
        int _min = _scanForMin(i, _right);
        _swap(Arr[i], Arr[_min]);
    }
}

//冒泡排序
void Sort::_bubbleSort()
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

//插入排序
void Sort::_insertSort()
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

//希尔排序
void Sort::_shellSort()
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

//return _index
int Sort::_scanForMin(int a, int b)
{
    if (a > b) {
        return false;
    }

    int _min = Arr[a];
    int _index = a;
    for (int i = a + 1; i <= b; ++i) {
        if (Arr[i] < _min) {
            _min = Arr[i];
            _index = i;
        }
    }
    return _index;
}

//打印数组
void Sort::var_dump()
{
    for (int i = 0; i <= _right; ++i) {
        std::cout << Arr[i] << " ";
    }
    std::cout << std::endl;
}