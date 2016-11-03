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
	BinNode(int e, BinNode* p = nullptr, BinNode* lc = nullptr, BinNode* rc = nullptr) :
		data(e), parent(p), lc(lc), rc(rc) {}

	//�����ӿ�
	int size();  //ͳ��������ģ
	BinNodePosi(T) insertAsLC(T const&);  //��Ϊ��ǰ�ڵ�����Ӳ����½ڵ�
	BinNodePosi(T) insertAsRC(T const&);  //��Ϊ��ǰ�ڵ���Һ��Ӳ����½ڵ�

};
