#pragma once
#include <iostream>
#define DEFAULT_CAPACITY 3 //默认的初始容量

template <typename T>
class Vector
{
protected:
	//规模，容量，数据区
	int _size;
	int _capacity;
	T* _elem;

	void copyFrom(T const* A, int lo, int hi);	//A[lo, hi)初始化Vector
	void expand(); //扩容

public:
	Vector(int s = 0, int c = DEFAULT_CAPACITY, T v = 0)	//默认构造函数
	{
		_elem = new T[_capacity = c];
		_size = s;
		for (int i = 0; i != s; ++i)
		{
			_elem[i] = v;
		}
	}
	Vector(const T* A, int n) { copyFrom(A, 0, n); }
	Vector(const T* A, int lo, int hi) { copyFrom(A, lo, hi); }
	~Vector() { delete[] _elem; }

	void insert(int posi, const T& e); //将e插入到posi处
	void push_back(T const& e); //将e插入到末尾
	void traverse();
	int size();
	int capacity();
	bool empty();
	int find(T const& e) { return posi = find(e, 0, _size); }
	int find(T const& e, int lo, int hi);
	T remove(int posi);
	
	//重载操作符
	T& operator[] (int posi);
	Vector<T>& operator= (Vector<T> const& V);
};

#include "VectorImp.h"