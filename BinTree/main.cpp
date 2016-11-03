
#include "BinTree.cpp"

template <typename T>
void randomBinTree(BinTree<T> & bt, BinNodePosi(T) x) {
		int v = 1;
		randomBinTree(bt, bt.insertAsLC(x, v));
		randomBinTree(bt, bt.insertAsRC(x, v+1));
}

int main()
{
	BinTree<int> bt;
	BinNodePosi(int) root = bt.insertAsRoot(10);
	BinNodePosi(int) firstChild = bt.insertAsLC(root, 9);
	BinNodePosi(int) secondChild = bt.insertAsRC(root, 8);
	

	bt.travIn(root);

	return 0;
}