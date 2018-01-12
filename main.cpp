#include "Sort/Sort.h"
#include "Test/Test.h"

int main()
{
    Test test;
    test.func();

    int A[] = {3, 9, 1, 26, 0, 2};
    Sort s(A, 0, 5);
    std::cout << "排序前：" << std::endl;
    s.var_dump();

//    std::cout << "冒泡排序后：" << std::endl;
//    s._bubbleSort();
//    s.var_dump();

    std::cout << "选择排序后：" << std::endl;
    s._selectSort();
    s.var_dump();

    std::cout << "下标2到5中最小值为：";
    std::cout << s._scanForMin(0, 1) << std::endl;

//    std::cout << "插入排序后：" << std::endl;
//    s._insertSort();
//    s.var_dump();

//    std::cout << "希尔排序后：" << std::endl;
//    s._shellSort();
//    s.var_dump();
}