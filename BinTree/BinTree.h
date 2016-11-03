#pragma once

#include "BinNode.cpp"	//����������ڵ���
#include <iostream>
#include <cstdlib>

template<typename T>
class BinTree
{
protected:
	int _size;	//�ڵ�ĸ���
	BinNodePosi(T) _root;	//���ڵ�λ��

public:
	BinTree() : _size(0), _root(nullptr) {};
	/*~BinTree() {
		if (_size > 0) {
			remove(_root);
		}
	}*/

	int size() const { return _size; }
	bool empty() const { return !_root; }
	BinNodePosi(T) root() { return _root }; //����λ��

	//int remove(BinNodePosi(T) x); //ɾ����λ��x���ڵ㴦Ϊ��������, ���ظ�����ԭ�ȵĹ�ģ
	BinNodePosi(T) insertAsRoot(T const& e);
	BinNodePosi(T) insertAsLC(BinNodePosi(T) x, T const& e);
	BinNodePosi(T) insertAsRC(BinNodePosi(T) x, T const& e);

	void travIn(BinNodePosi(T) x); //�������
	void createTree(BinTree<T>& bt, BinNodePosi(T) x); //������
};

