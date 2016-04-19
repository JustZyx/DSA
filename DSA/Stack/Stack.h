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

template<typename T>
Stack<T>::Stack() {
	_size = 0;
	_elem = new T[DEFAULT_CAPACITY];
}

template<typename T>
T& Stack<T>::top() const{
	assert(_size > 0);
	return _elem[_size-1];
}

template<typename T>
void Stack<T>::push(const T& e) {
	assert(_size >= 0);
	put(_size, e);
}

template<typename T>
void Stack<T>::pop() {
	remove(_size - 1);
}

template<typename T>
bool Stack<T>::empty() {
	if (_size <= 0)
		return true;
	return false;
}

