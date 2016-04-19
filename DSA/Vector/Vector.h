/*    
 函数名称:    
 函数说明：     
 作 成 者：Yongxin Zhuang    
 作成日期：2016/04/11
 联系方式: zhuang_yongxin@163.com     
*/ 
#pragma once
typedef int Rank;
const int DEFAULT_CAPACITY = 10;

template<typename T> class Vector {
protected:
	Rank _size;
	int _capacity;
	T* _elem;
public:
	Vector(Rank length = 0, T value = 0, int capacity = DEFAULT_CAPACITY) {
		_elem = new T[_capacity = capacity];
		for (_size = 0; _size < length; ++_size)
			_elem[_size] = value;
	}
	Vector(const T* A, Rank lo, Rank hi) {
		copyFrom(A, lo, hi);
	}
	Vector(T* const A, int n) {
		copyFrom(A, 0, n);
	}
	Vector(Vector const& V) {
		copyFrom(V._elem, 0, V._size);
	}
	void copyFrom(T* const A, Rank lo, Rank hi);
	~Vector() { delete[] _elem; }
	Rank size() const { return _size; }
	T& operator[](Rank r) { 
		if (r < 0 || r >= _size) {
			std::cout << "下标不合法" << std::endl;
			exit(1);
		}
		return _elem[r]; 
	}
	void expand();
	void traverse();
	T& get(Rank r) const;
	void put(Rank r, T e);
	void remove(Rank lo, Rank hi);
	void remove(Rank r);
	void shrink();
	Rank find(const T& e, Rank lo, Rank hi) const;
};

#include "VectorImplementation.h"