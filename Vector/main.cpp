#include "Vector.h"

int main()
{
	Vector<int> vec;

	std::cout << "vec������Ϊ: ";
	std::cout << vec._capacity << std::endl;
	std::cout << "vec�Ĺ�ģΪ: ";
	std::cout << vec.size() << std::endl;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.insert(1, 4);

	std::cout << "vec�Ĺ�ģΪ: ";
	std::cout << vec.size() << std::endl;
	std::cout << "vec������Ϊ: ";
	std::cout << vec._capacity << std::endl;
	vec.traverse();
}