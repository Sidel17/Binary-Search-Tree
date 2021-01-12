#include<stdio.h>
#include<stdlib.h>
#include "fatal.h"
#include "binary_search_tree.h"

struct TreeNode{
	ElementType Element;
	BinarySearchTree Left;
	BinarySearchTree Right;
};

BinarySearchTree MakeEmpty(BinarySearchTree T){
	if(T!=NULL){
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}

	return NULL;
}

BinarySearchTree Insert(ElementType X, BinarySearchTree T){
	if(T==NULL){
		T = malloc(sizeof(struct TreeNode));
		if(T==NULL)
			FatalEror("Out of Space !1!1!1");
		else{
			T->Element = X;
			T->Left = T->Right = NULL;
		}
	}
	else{
		if(X < T->Element){
			T->Left = Insert(X, T->Left);
		}
		else if(X > T->Element){
			T->Right = Insert(X, T->Right);
		}
	}

	return T;
}

ElementType Retrieve(Position P){
	return P->Element;
}

Position Find(ElementType X, BinarySearchTree T){
	if(T==NULL){
		return NULL;
	}
	if(X < T->Element){
		return Find(X, T->Left);
	}
	else if(X > T->Element){
		return Find(X, T->Right);
	}
	else{
		return T;
	}
}

Position FindMin(BinarySearchTree T){
	if(T==NULL)
		return NULL;
	else
		if(T->Left==NULL)
		return T;
	else
	return FindMin(T->Left);
	
}

Position FindMax(BinarySearchTree T){
	if(T != NULL)	
		while(T->Right != NULL)
			T = T->Right;
	return T;
}

BinarySearchTree Delete(ElementType X, BinarySearchTree T){
	Position TmpCell;

	if(T==NULL)
		Eror("ELEMENT NOT FOUND");
	else if(X < T->Element)
		T->Left = Delete(X, T->Left);
	else if(X > T->Element)
		T->Right = Delete(X, T->Right);
	else
		if(T->Left && T->Right){
			TmpCell = FindMin(T->Right);
			T->Element = TmpCell->Element;
			T->Right = Delete(T->Element, T->Right);
		}else{
			TmpCell = T;
			if(T->Left == NULL){
				T = T->Right;
			}
			else if(T->Right == NULL){
				T = T->Left;
			}
			free(TmpCell);
		}
	return T;
}

Position FindMinIterative(BinarySearchTree T){
	if( T != NULL)
		while( T->Left != NULL )
			T = T->Left;
		return T;
}

int GetDepth(BinarySearchTree T){
	if(T==NULL){
		return -1;
	}
	else{
		int u = GetDepth(T->Left);
		int v = GetDepth(T->Right);
		if(u > v){
			return u+1;
		}
		else{
			return v+1;
		}
	}
}

int BanyakDaun(BinarySearchTree T){
	if(T==NULL)
	return 0;
	if(T->Left && T->Right)
	return (BanyakDaun(T->Left) + BanyakDaun(T->Right));
	else
	return 1;
}

int JumlahDaun(BinarySearchTree T){
	if(T==NULL)
	return 0;
	if(T->Left && T->Right)
	return (JumlahDaun(T->Left) + JumlahDaun(T->Right));
	else if(T->Left != NULL)
	return JumlahDaun(T->Left);
	else if(T->Right != NULL)
	return JumlahDaun(T->Right);
	else
	return T->Element;
}

int SumOfElement(BinarySearchTree T){
	if(T==NULL)
	return 0;
	else
	return T->Element + SumOfElement(T->Left) + SumOfElement(T->Right);
}

int BanyakElement(BinarySearchTree T){
	if(T==NULL)
	return 0;
	else
	return 1 + BanyakElement(T->Left) + BanyakElement(T->Right);
}

