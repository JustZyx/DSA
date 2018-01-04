#pragma once

#include "BinNode.h"	//����������ڵ���
#include <iostream>

template <typename T>
class BinTree
{
protected:
	int _size;	//�ڵ�ĸ���
	BinNodePosi(T) _root;	//���ڵ�λ��

public:
	BinTree() : _size(0), _root(nullptr) {};

	int size() const { return _size; }
	bool empty() const { return !_root; }
	BinNodePosi(T) root() { return _root }; //����λ��

	//int remove(BinNodePosi(T) x); //ɾ����λ��x���ڵ㴦Ϊ��������, ���ظ�����ԭ�ȵĹ�ģ
	BinNodePosi(T) insertAsRoot(T const& e);
	BinNodePosi(T) insertAsLC(BinNodePosi(T) x, T const& e);
	BinNodePosi(T) insertAsRC(BinNodePosi(T) x, T const& e);
	
	void travLevel() { if (_root) _root->travLevel(); }	//�������
	void travPre() { if (_root) _root->travPre(); } //�������
	void travIn() { if (_root) _root->travIn(); } //�������
	void travPost() { if (_root) _root->travPost(); } //�������
};

#include "BinTreeImp.h"