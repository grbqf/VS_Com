#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"

// 创建一个新的二叉树节点，数据为x，左右孩子置空
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

// 前序遍历：根 -> 左子树 -> 右子树
// 遇到空节点打印N，方便观察树结构
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

// 中序遍历：左子树 -> 根 -> 右子树
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

// 后序遍历：左子树 -> 右子树 -> 根
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

// 求二叉树节点总个数
int TreeSize(BTNode* root)
{
	// 空树，节点数0
	if (root == NULL)
		return 0;
	// 当前节点(+1) + 左子树节点数 + 右子树节点数
	return TreeSize(root->left) + TreeSize(root->right) + 1;
}

// 统计二叉树叶子节点个数（叶子：左右孩子都为NULL）
int TreeLeaSize(BTNode* root)
{
	// 空树，叶子0个
	if (root == NULL)
		return 0;
	// 左右都为空，说明是叶子节点，返回1
	if (root->left == NULL && root->right == NULL)
		return 1;
	// 叶子总数 = 左子树叶子 + 右子树叶子
	return TreeLeaSize(root->left) + TreeLeaSize(root->right);
}

// 求二叉树的高度（深度）
int TreeHight(BTNode* root)
{
	// 空树高度为0
	if (root == NULL)
		return 0;
	// 递归算出左子树高度、右子树高度
	int leftH = TreeHight(root->left);
	int rightH = TreeHight(root->right);

	// 当前树高度 = 左右子树较大高度 + 当前这一层
	return leftH > rightH ?
		leftH + 1 : rightH + 1;
}

// 求二叉树第k层的节点个数，k从1开始
int TreeLevelKSize(BTNode* root, int k)
{
	assert(k > 0);
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return TreeLevelKSize(root->left, k - 1) + TreeLevelKSize(root->right, k - 1);
}


// 在二叉树中查找值为x的节点，找到返回节点指针，找不到返回NULL
BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;
	if (root->a == x)
		return root;
	BTNode* ret = TreeFind(root->left, x);
	if (ret)
		return ret;
	ret = TreeFind(root->right, x);
	if (ret)
		return ret;
	return NULL;
}

// 判断两棵二叉树是否完全相同（结构相同，每个节点数据相等）
bool IsSameTree(BTNode* root1, BTNode* root2)
{
	if (root1 == NULL && root2 == NULL)
		return true;
	if (root1 == NULL || root2 == NULL)
		return false;
	if (root1->a == root2->a)
		return IsSameTree(root1->left , root2->left) && IsSameTree(root1->right , root2->right);
	return false;
}

bool IsMIrror(BTNode* root1, BTNode* root2)
{
	if (root1 == NULL && root2 == NULL)
		return true;
	if (root1 == NULL || root2 == NULL)
		return false;
	if (root1->a == root2->a)
		return IsMIrror(root1->left, root2->right) && IsMIrror(root1->right, root2->left);
	return false;
}

// 判断二叉树是否是镜像对称树
bool IsSymmetric(BTNode* root)
{
	if (root == NULL)
		return true;
	return IsMIrror(root->left, root->right);
}
