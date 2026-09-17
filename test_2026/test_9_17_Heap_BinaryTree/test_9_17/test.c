#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
#include"BinaryTree.h"

BTNode* CreateTree()
{
	BTNode* node1 = BTBuyNode(1);
	BTNode* node2 = BTBuyNode(2);
	BTNode* node3 = BTBuyNode(3);
	BTNode* node4 = BTBuyNode(4);
	BTNode* node5 = BTBuyNode(5);
	BTNode* node6 = BTBuyNode(6);

	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;

	return node1;
}

int main()
{
	BTNode* root = CreateTree();
	PrevOrder(root);
	printf("\n");

	InOrder(root);
	printf("\n");

	AfterOrder(root);
	printf("\n");


	return 0;
}
