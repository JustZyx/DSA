#pragma once
#include "../Vector/Vector.h"
template <typename T>
class Stack : public Vector<T>
{
public:
	void push(T const& e);
	T pop();
	T& top();
};

#include "StackImp.h"