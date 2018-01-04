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

//插入当前节点的左节点，返回左节点的位置
template <typename T> BinNodePosi(T) BinNode<T>::insertAsLC(T const& e)
{
	return lc = new BinNode(e, this);
}

//插入当前节点的右节点，返回右节点的位置
template <typename T> BinNodePosi(T) BinNode<T>::insertAsRC(T const& e)
{
	return rc = new BinNode(e, this);
}

//从当前节点出发，层序遍历
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

//从当前节点出发，先序遍历
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

//从当前节点出发，中序遍历
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