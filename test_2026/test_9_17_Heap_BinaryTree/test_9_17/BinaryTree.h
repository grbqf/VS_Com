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

BTNode* BTBuyNode(BTDataType x);

void PrevOrder(BTNode* root);
void InOrder(BTNode* root);
void PrevOrder(BTNode* root);

int TreeSize(BTNode* root);

int TreeLeaSiez(BTNode* root);

int TreeHight(BTNode* root);
