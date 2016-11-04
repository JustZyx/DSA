#pragma once

#include "BinNode.h"	//引入二叉树节点类
#include <iostream>

template <typename T>
class BinTree
{
protected:
	int _size;	//节点的个数
	BinNodePosi(T) _root;	//根节点位置

public:
	BinTree() : _size(0), _root(nullptr) {};

	int size() const { return _size; }
	bool empty() const { return !_root; }
	BinNodePosi(T) root() { return _root }; //树根位置

	//int remove(BinNodePosi(T) x); //删除以位置x处节点处为根的子树, 返回该字数原先的规模
	BinNodePosi(T) insertAsRoot(T const& e);
	BinNodePosi(T) insertAsLC(BinNodePosi(T) x, T const& e);
	BinNodePosi(T) insertAsRC(BinNodePosi(T) x, T const& e);
	
	void travLevel() { if (_root) _root->travLevel(); }	//层序遍历
	void travPre() { if (_root) _root->travPre(); } //先序遍历
	void travIn() { if (_root) _root->travIn(); } //中序遍历
	void travPost() { if (_root) _root->travPost(); } //后序遍历
};

#include "BinTreeImp.h"