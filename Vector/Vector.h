#pragma once
#include <iostream>
#define DEFAULT_CAPACITY 3 //Ĭ�ϵĳ�ʼ����

template <typename T>
class Vector
{
protected:
	//��ģ��������������
	int _size;
	int _capacity;
	T* _elem;

	void copyFrom(T const* A, int lo, int hi);	//A[lo, hi)��ʼ��Vector
	void expand(); //����

public:
	Vector(int s = 0, int c = DEFAULT_CAPACITY, T v = 0)	//Ĭ�Ϲ��캯��
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

	void insert(int posi, const T& e); //��e���뵽posi��
	void push_back(T const& e); //��e���뵽ĩβ
	void traverse();
	int size();
	int capacity();
	bool empty();
	int find(T const& e) { return posi = find(e, 0, _size); }
	int find(T const& e, int lo, int hi);
	T remove(int posi);
	
	//���ز�����
	T& operator[] (int posi);
	Vector<T>& operator= (Vector<T> const& V);
};

#include "VectorImp.h"