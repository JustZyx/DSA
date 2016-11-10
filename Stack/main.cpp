#include "Stack.h"

int main()
{
	Stack<int> s;
	
	s.push(1);
	s.push(2);

	std::cout << s.size() << std::endl;
	std::cout << s.top() << std::endl;
	std::cout << s.pop() << std::endl;
	std::cout << s.empty() << std::endl;
	std::cout << s.pop() << std::endl;
	std::cout << s.empty() << std::endl;

	return 0;
}