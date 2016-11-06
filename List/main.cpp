
#include "List.h"


int main()
{
	List<int> list;

	ListNodePosi(int) posi =  list.insertAsSucc(list.first(), 1);
	//list.insertAsPred(posi, 3);
	/*list.insertAsSucc(list.first(), 2);
	list.insertAsPred(posi, 3);*/
	list.traverse();

	return 0;
}