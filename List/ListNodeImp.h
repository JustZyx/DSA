#pragma once

template <typename T> ListNodePosi(T) ListNode<T>::insertAsPred(T const& e)
{
	ListNodePosi(T) x = new ListNode(e, pred, this);
	pred->succ = x;
	this->pred = x;
	return x;
}

template <typename T> ListNodePosi(T) ListNode<T>::insertAsSucc(T const& e)
{
	ListNodePosi(T) x = new ListNode(e, this, succ);
	this->succ = x;
	succ->pred = x;
	return x;
}