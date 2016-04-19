#pragma once
#include <cassert>

template<typename T> 
class Stack :public Vector<T>{
public:
	Stack();
	T& top() const;
	void push(const T& e);
	void pop();
	bool empty();
};

#include "StackImplementation.h"
