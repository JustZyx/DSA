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
	BinNode(int e, BinNode* p = nullptr, BinNode* lc = nullptr, BinNode* rc = nullptr) :
		data(e), parent(p), lc(lc), rc(rc) {}

	//操作接口
	int size();  //统计子树规模
	BinNodePosi(T) insertAsLC(T const&);  //作为当前节点的左孩子插入新节点
	BinNodePosi(T) insertAsRC(T const&);  //作为当前节点的右孩子插入新节点

};
