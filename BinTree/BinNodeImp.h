#pragma once

#include <queue>

template <typename T>
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

//���뵱ǰ�ڵ����ڵ㣬������ڵ��λ��
template <typename T> BinNodePosi(T) BinNode<T>::insertAsLC(T const& e)
{
	return lc = new BinNode(e, this);
}

//���뵱ǰ�ڵ���ҽڵ㣬�����ҽڵ��λ��
template <typename T> BinNodePosi(T) BinNode<T>::insertAsRC(T const& e)
{
	return rc = new BinNode(e, this);
}

//�ӵ�ǰ�ڵ�������������
template <typename T> void BinNode<T>::travLevel()
{
	std::queue<BinNodePosi(T)> Q;
	Q.push(this);
	std::cout << this->data << "=>";
	while (!Q.empty()) {
		BinNodePosi(T) x = Q.front();
		Q.pop();
		if (x->lc) {
			std::cout << x->lc->data << "=>";
			Q.push(x->lc);
		}
		else {
			std::cout << "#=>";
		}
		if (x->rc) {
			std::cout << x->rc->data << "=>";
			Q.push(x->rc);
		}
		else {
			std::cout << "#=>";
		}
	}
}

//�ӵ�ǰ�ڵ�������������
template <typename T> void BinNode<T>::travPre()
{
	if (!this) {
		std::cout << "#=>";
		return;
	}

	std::cout << this->data << "=>";
	this->lc->travPre();
	this->rc->travPre();
}

//�ӵ�ǰ�ڵ�������������
template <typename T> void BinNode<T>::travIn()
{
	if (!this) {
		std::cout << "#=>";
		return;
	}

	this->lc->travIn();
	std::cout << this->data << "=>";
	this->rc->travIn();
}

template <typename T> void BinNode<T>::travPost()
{
	if (!this) {
		std::cout << "#=>";
		return;
	}

	this->lc->travPost();
	this->rc->travPost();
	std::cout << this->data << "=>";
}