#pragma once
#include <algorithm>

template<typename T>
void Vector<T>::expand() {
	if (_size < _capacity) return;
	_capacity = std::max(_capacity, DEFAULT_CAPACITY);
	T* oldElem = _elem;
	_elem = new T[_capacity <<= 1];
	for (int i = 0; i < _size; ++i)
		_elem[i] = oldElem[i];
	delete[] oldElem;
}

template<typename T>
void Vector<T>::copyFrom(T* const A, Rank lo, Rank hi) {
	_elem = new T[_capacity = 2 * (hi - lo)];	//分配空间
	_size = 0;	//规模清0
	while (lo < hi) {	//A[lo, hi)内的元素逐一复制到_elem中
		_elem[_size++] = A[lo++];
	}
}

template<typename T>
void Vector<T>::traverse() {
	for (int i = 0; i < _size; ++i) {
		std::cout << _elem[i] << " ";
	}
	std::cout << std::endl;
}

template<typename T>
T& Vector<T>::get (Rank r) const{
	if (r < 0 || r >= _size) {
		std::cout << "下标越界!" << std::endl;
		exit(1);
	}
	return _elem[r];
}

template<typename T>
void Vector<T>::put(Rank r, T e) {
	if (_size >= _capacity)
		expand();
	if (r < 0 || r > _size) {
		std::cout << "下标越界" << std::endl;
		return;
	}
	for (Rank i = _size; i >= r; i--) {
		_elem[i + 1] = _elem[i];
	}
	_elem[r] = e;
	++_size;
}

template<typename T>
void Vector<T>::remove(Rank lo, Rank hi) {
	if (lo == hi) {
		std::cout << "区间无效" << std::endl;
		return;
	}
	while (hi < _size) {
		_elem[lo++] = _elem[hi++];
	}
	shrink();
	_size = lo;
}

template<typename T>
void Vector<T>::remove(Rank r) {
	if (r < 0 || r >= _size) {
		std::cout << "下标越界" << std::endl;
		return;
	}
	/*for (Rank i = r + 1; i != _size; ++i) {
		_elem[i - 1] = _elem[i]
	}
	--_size;*/
	remove(r, r + 1);
}

template<typename T>
void Vector<T>::shrink() {
	if ((_size << 2) > _capacity) return;
	T* oldElem = _elem;
	_elem = new T[_capacity >> 1];
	for (int i = 0; i != _size; ++i) {
		_elem[i] = oldElem[i];
	}
	delete[] oldElem;
}

template<typename T>
Rank Vector<T>::find(const T& e, Rank lo, Rank hi) const{
	if (lo >= hi) {
		std::cout << "区间无效" << std::endl;
		return -1;
	}
	for (Rank i = lo; i < hi; i++) {
		if (_elem[i] == e)
			return i;
	}
	return -1;
}