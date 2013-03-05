#include <iostream>
#include <ctime>
#include "RBTree.h"

using namespace std;

int main()
{
  int i, count = 9;
	rb_key_t key;
	rb_node_t* root = NULL, *node = NULL;
	int repeat=0;

	/*srand(time(0));*/
	for (i = 1; i <= count; ++i)
	{
		/*key = rand() % count;*/
        cin>>key;

		cout<<i<<" insert key "<<key;
		root=rb_insert(root,key);
	}

	/*cout<<"Tree height: "<<rb_tree_height(root)<<endl;

	preorder_tree_walk(root);
	cout<<endl;
	inorder_tree_walk(root);
	cout<<endl;*/

	for (i=1;i<=count;i++)
	{
		cin>>key;

		cout<<i<<" delete key "<<key;
		root=rb_delete(root,key);
	}

	return 0;
}
