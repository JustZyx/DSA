#pragma once

#include "BinTree.h"

template <typename T>
BinNodePosi(T) BinTree<T>::insertAsRoot(T const& e)
{
	_size = 1;
	return _root = new BinNode<T>(e);
}

template <typename T>
BinNodePosi(T) BinTree<T>::insertAsLC(BinNodePosi(T) x, T const& e)
{
	_size += 1;
	x->insertAsLC(e);
	return x->lc;
}

template <typename T>
BinNodePosi(T) BinTree<T>::insertAsRC(BinNodePosi(T) x, T const& e)
{
	_size += 1;
	x->insertAsRC(e);
	return x->rc;
}

template <typename T>
void BinTree<T>::travIn(BinNodePosi(T) x)
{
	if (!x) {
		std::cout << "#" << "=>";
	}
	else {
		std::cout << x->data << "=>";
		travIn(x->lc);
		travIn(x->rc);
	}
}