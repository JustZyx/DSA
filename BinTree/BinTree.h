#pragma once

#include "BinNode.cpp"	//引入二叉树节点类
#include <iostream>
#include <cstdlib>

template<typename T>
class BinTree
{
protected:
	int _size;	//节点的个数
	BinNodePosi(T) _root;	//根节点位置

public:
	BinTree() : _size(0), _root(nullptr) {};
	/*~BinTree() {
		if (_size > 0) {
			remove(_root);
		}
	}*/

	int size() const { return _size; }
	bool empty() const { return !_root; }
	BinNodePosi(T) root() { return _root }; //树根位置

	//int remove(BinNodePosi(T) x); //删除以位置x处节点处为根的子树, 返回该字数原先的规模
	BinNodePosi(T) insertAsRoot(T const& e);
	BinNodePosi(T) insertAsLC(BinNodePosi(T) x, T const& e);
	BinNodePosi(T) insertAsRC(BinNodePosi(T) x, T const& e);

	void travIn(BinNodePosi(T) x); //中序遍历
	void createTree(BinTree<T>& bt, BinNodePosi(T) x); //创建树
};

