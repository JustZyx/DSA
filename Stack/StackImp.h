#pragma once

template <typename T>
void Stack<T>::push(T const& e) 
{
	this->push_back(e);
}

template <typename T>
T Stack<T>::pop() 
{
	T data = this->_elem[this->_size - 1];
	this->remove(this->size() - 1);
	return data;
}

template <typename T>
T& Stack<T>::top()
{
	return this->_elem[this->_size - 1];
}