#pragma once

#include "BinNode.h"

template<typename T>
int BinNode<T>::size()
{
	int size = 1;
	if (lc) {
		size += lc->size();
	}
	if (rc) {
		size += rc->size();
	}
	return size;
}

template<typename T>
BinNodePosi(T) BinNode<T>::insertAsLC(T const& e)
{
	return lc = new BinNode(e, this);
}

template<typename T>
BinNodePosi(T) BinNode<T>::insertAsRC(T const& e)
{
	return rc = new BinNode(e, this);
}
