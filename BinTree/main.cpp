
#include "BinTree.h"

int main()
{
	BinTree<int> bt;	//¶¨ÒåÒ»¿ÅÊ÷
	int height = 3;

	BinNodePosi(int) root = bt.insertAsRoot(5);
	BinNodePosi(int) firstLeftChild = root->insertAsLC(4);
	BinNodePosi(int) firstRightChild = root->insertAsRC(3);
	BinNodePosi(int) SecondLeftChild = firstLeftChild->insertAsLC(2);

	bt.travPre();
	std::cout << std::endl;
	bt.travIn();
	std::cout << std::endl;
	bt.travLevel();
	std::cout << std::endl;


	/*BinNodePosi(int) root = bt.insertAsRoot(10);
	BinNodePosi(int) firstChild = bt.insertAsLC(root, 9);
	BinNodePosi(int) secondChild = bt.insertAsRC(root, 8);
	

	bt.travIn(root);*/

	return 0;
}