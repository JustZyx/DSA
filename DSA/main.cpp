/*    
 函数名称:    
 函数说明：     
 作 成 者：Yongxin Zhuang    
 作成日期：2016/04/11
 联系方式: zhuang_yongxin@163.com     
*/ 
#include "Vector\Vector.h"
#include "Stack\Stack.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	Stack<int> s;
	cout << s.empty() << endl;
	s.push(1);
	cout << s.top() << endl;
	cout << s.empty() << endl;
	s.push(2);
	s.pop();
	cout << s.top() << endl;

	return 0;
}