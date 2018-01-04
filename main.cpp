#include "Sort/Sort.h"

int main()
{
    int A[] = {3, 9, 1, 26, 0, 2};
    Sort s(A, 0, 5);
    std::cout << "排序前：" << std::endl;
    s.var_dump();

//    std::cout << "冒泡排序后：" << std::endl;
//    s._bubbleSort();
//    s.var_dump();

//    std::cout << "插入排序后：" << std::endl;
//    s._insertSort();
//    s.var_dump();

    std::cout << "希尔排序后：" << std::endl;
    s._shellSort();
    s.var_dump();
}