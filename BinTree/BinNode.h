#pragma once

#define BinNodePosi(T) BinNode<T>*  //节点位置

//节点模版类
template<typename T>
struct BinNode
{
	T data; //数值

	//父节点及左右孩子
	BinNodePosi(T) parent;
	BinNodePosi(T) lc;
	BinNodePosi(T) rc;

	//构造函数
	BinNode() :
		parent(nullptr), lc(nullptr), rc(nullptr) {}
	BinNode(T e, BinNodePosi(T) p = nullptr, BinNodePosi(T) lc = nullptr, BinNodePosi(T) rc = nullptr) :
		data(e), parent(p), lc(lc), rc(rc) {}

	//操作接口
	int size();  //统计子树规模
	BinNodePosi(T) insertAsLC(T const&);  //作为当前节点的左孩子插入新节点
	BinNodePosi(T) insertAsRC(T const&);  //作为当前节点的右孩子插入新节点
	BinNodePosi(T) succ(); //返回当前节点的直接后继

	void travLevel();
	void travPre();
	void travIn();
	void travPost();

	bool operator< (BinNode<T> const& bn) { return data < bn.data; }  //比较两个节点大小
	bool operator= (BinNode<T> const& bn) { return data == bn.data; }	//比较两个节点是否相等
};

#include "BinNodeImp.h"