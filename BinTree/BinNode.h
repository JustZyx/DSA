#pragma once

#define BinNodePosi(T) BinNode<T>*  //�ڵ�λ��

//�ڵ�ģ����
template<typename T>
struct BinNode
{
	T data; //��ֵ

	//���ڵ㼰���Һ���
	BinNodePosi(T) parent;
	BinNodePosi(T) lc;
	BinNodePosi(T) rc;

	//���캯��
	BinNode() :
		parent(nullptr), lc(nullptr), rc(nullptr) {}
	BinNode(T e, BinNodePosi(T) p = nullptr, BinNodePosi(T) lc = nullptr, BinNodePosi(T) rc = nullptr) :
		data(e), parent(p), lc(lc), rc(rc) {}

	//�����ӿ�
	int size();  //ͳ��������ģ
	BinNodePosi(T) insertAsLC(T const&);  //��Ϊ��ǰ�ڵ�����Ӳ����½ڵ�
	BinNodePosi(T) insertAsRC(T const&);  //��Ϊ��ǰ�ڵ���Һ��Ӳ����½ڵ�
	BinNodePosi(T) succ(); //���ص�ǰ�ڵ��ֱ�Ӻ��

	void travLevel();
	void travPre();
	void travIn();
	void travPost();

	bool operator< (BinNode<T> const& bn) { return data < bn.data; }  //�Ƚ������ڵ��С
	bool operator= (BinNode<T> const& bn) { return data == bn.data; }	//�Ƚ������ڵ��Ƿ����
};

#include "BinNodeImp.h"