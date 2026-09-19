#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int BTDataType;

typedef struct BirnaryTreeNode
{
	BTDataType a;
	struct BirnaryTreeNode* left;
	struct BirnaryTreeNode* right;
}BTNode;

// 创建新二叉树节点，值为x
BTNode* BTBuyNode(BTDataType x);

// 前序遍历二叉树：根 -> 左 -> 右
void PrevOrder(BTNode* root);

// 中序遍历二叉树：左 -> 根 -> 右
void InOrder(BTNode* root);

// 前序遍历二叉树：根 -> 左 -> 右（重复声明，注意代码里不要重复定义）
void PrevOrder(BTNode* root);

// 统计二叉树全部节点总数
int TreeSize(BTNode* root);

// 统计二叉树叶子节点数量（叶子：左右孩子均为空）
int TreeLeaSiez(BTNode* root);

// 求二叉树的高度（深度）
int TreeHight(BTNode* root);

// 求二叉树第k层的节点个数，k从1开始
int TreeLevelKSize(BTNode* root, int k);

// 在二叉树中查找值为x的节点，找到返回节点指针，找不到返回NULL
BTNode* TreeFind(BTNode* root, BTDataType x);

// 判断两棵二叉树是否完全相同（结构相同，每个节点数据相等）
bool IsSameTree(BTNode* root1, BTNode* root2);

// 判断二叉树是否是镜像对称树
bool IsSymmetric(BTNode* root);

void TreeDistory(BTNode* root);