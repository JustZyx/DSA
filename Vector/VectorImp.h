#pragma once

template <typename T> void Vector<T>::copyFrom(T const* A, int lo, int hi)
{
	_size = 0;
	_elem = new T[_capacity = hi - lo + 10];
	for (int i = lo; i != hi; ++i) {
		_elem[i] = A[i];
		++_size;
	}
}

template <typename T> void Vector<T>::expand()
{
	if (_size < _capacity)
		return;

	T* _oldElem = _elem;
	_elem = new T[_capacity = 2 * _capacity];
	copyFrom(_oldElem, 0, _size);
	delete[] _oldElem;
}

template <typename T> void Vector<T>::insert(int posi, const T& e) //将e插入到posi处
{
	if (_size >= _capacity)
		expand();

	for (int i = _size - 1; i >= posi; --i) {
		_elem[i + 1] = _elem[i];
	}
	_elem[posi] = e;
	_size++;
}

template <typename T> void Vector<T>::push_back(T const& e) //将e插入到末尾
{
	if (_size >= _capacity)
		expand();

	_elem[_size] = e;
	++_size;
}

template <typename T> void Vector<T>::traverse()
{
	if (_size <= 0) {
		std::cout << "该顺序表为空！";
		return;
	}

	for (int i = 0; i != _size; ++i)
		std::cout << _elem[i] << " ";

	std::cout << std::endl;
}

template <typename T> int Vector<T>::size()
{
	return _size;
}

template <typename T> int Vector<T>::capacity()
{
	return _capacity;
}

template <typename T> bool Vector<T>::empty()
{
	return _size > 0 ? true : false;
}

template <typename T> int Vector<T>::find(T const& e, int lo, int hi)
{
	for (int i = lo; i != hi; ++i) {
		if (_elem[i] == e)
			return i;
	}

	std::cout << "没有找到" << e << std::endl;
	return -1;
}
 
template <typename T> T Vector<T>::remove(int posi)
{
	if (posi < 0 || posi >= _size) {
		std::cout << "下标不合法";
		return -1;
	}

	T tmp = _elem[posi];
	for (int i = posi; i != _size - 1; ++i) {
		_elem[i] = _elem[i + 1];
	}
	--_size;
	return tmp;
}


template <typename T> T& Vector<T>::operator[] (int posi)
{
	if (posi < 0 || posi >= _size) {
		std::cout << "下标不合法";
		return;
	}

	return _elem[posi];
}

template <typename T> Vector<T>& Vector<T>::operator= (Vector<T> const& V)
{
	if (_elem)
		delete[] _elem;

	copyFrom(V._elem, 0, V._size);
	return *this;
}