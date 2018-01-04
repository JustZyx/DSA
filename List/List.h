#pragma once
#include "ListNode.h"
#include <iostream>

template <typename T>
class List
{
private:
	int _size;
	ListNodePosi(T) header;
	ListNodePosi(T) trailer;

protected:
	void init()
	{
		header = new ListNode<T>;
		trailer = new ListNode<T>;
		header->pred = nullptr;
		header->succ = trailer;
		trailer->pred = header;
		trailer->succ = nullptr;
		_size = 0;
	}

public:
	List() { init(); } //默认构造函数

	//只读访问接口
	int size() { return _size; }
	bool empty() { return !_size; }
	ListNodePosi(T) first() { return header; }
	ListNodePosi(T) last() { return trailer; }
	ListNodePosi(T) find(T const& e)
	{
		while (0 < n--)
		{
			if (e == (trailer = trailer->pred)->data)
				return p;
		}
		return nullptr;
	}
	void traverse()
	{
		for (ListNodePosi(T) p = header->succ; p != trailer; p = p->succ)
			std::cout << p->data << " ";
	}


	//可写访问接口
	ListNodePosi(T) insertAsPred(ListNodePosi(T) p, T const& e) { ++_size; return p->insertAsPred(e);  }
	ListNodePosi(T) insertAsSucc(ListNodePosi(T) p, T const& e) { ++_size; return p->insertAsSucc(e); }
	
};

#include "ListImp.h"