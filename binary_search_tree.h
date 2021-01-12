typedef int ElementType;

#ifndef _Tree_H
#define _Tree_H

struct TreeNode;
typedef struct TreeNode *Position;
typedef struct TreeNode *BinarySearchTree;

BinarySearchTree Insert(ElementType X, BinarySearchTree T);
Position Find(ElementType X, BinarySearchTree T);
ElementType Retrieve(Position P);
BinarySearchTree MakeEmpty(BinarySearchTree T);
Position FindMin(BinarySearchTree T);
Position FindMax(BinarySearchTree T);
BinarySearchTree Delete(ElementType X, BinarySearchTree T);
Position FindMinIterative(BinarySearchTree T);
int GetDepth(BinarySearchTree T);
int BanyakDaun(BinarySearchTree T);
int JumlahDaun(BinarySearchTree T);
int SumOfElement(BinarySearchTree T);
int BanyakElement(BinarySearchTree T);

#endif

