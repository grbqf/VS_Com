#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

BTNode* BTBuyNode(BTDataType x)
{
	BTNode* newnode = (BTNode*)malloc(sizeof(BTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return;
	}
	newnode->a = x;
	newnode->left = newnode->right = NULL;
	return newnode;
}

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%d ", root->a);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->a);
	InOrder(root->right);
}
void AfterOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	AfterOrder(root->left);
	AfterOrder(root->right);
	printf("%d ", root->a);
}

int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	return TreeSize(root->left) + TreeSize(root->right) + 1;
}

int TreeLeaSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left ==NULL && root->right == NULL)
		return 1;
	return TreeLeaSize(root->left) + TreeLeaSize(root->right);

}

int TreeHight(BTNode* root)
{
	if (root == NULL)
		return 0;
	int leftH = TreeHight(root->left);
	int rightH = TreeHight(root->right);

	return leftH > rightH ?
		leftH + 1 : rightH + 1;
}