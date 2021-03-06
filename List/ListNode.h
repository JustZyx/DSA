#pragma once

#define ListNodePosi(T) ListNode<T>*

template <typename T>
struct ListNode
{
	//节点的数值，前驱和后继
	T data;
	ListNodePosi(T) pred;
	ListNodePosi(T) succ;

	ListNode() {};
	ListNode(T e, ListNodePosi(T) p = nullptr, ListNodePosi(T) s = nullptr) : data(e), pred(p), succ(s) {  }

	ListNodePosi(T) insertAsPred(T const& e);
	ListNodePosi(T) insertAsSucc(T const& e);
};

#include "ListNodeImp.h"