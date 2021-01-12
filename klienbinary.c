#include<stdio.h>
#include "binary_search_tree.h"

int main(){
	int X;
	BinarySearchTree T = NULL;
	Position P = NULL;
	T = MakeEmpty(NULL);
	T = Insert(15, T);
	T = Insert(5, T);
	T = Insert(17, T);
	T = Insert(3, T);
	T = Insert(6, T);
	T = Insert(16, T);
	T = Insert(23, T);
	T = Insert(9, T);
	T = Insert(4, T);
	T = Insert(8, T);
	T = Insert(20, T);
	T = Insert(25, T);
	T = Insert(7, T);
	T = Insert(2, T);

	printf("\nElement Root = %d\n",Retrieve(T));
	P = FindMin(T);
	printf("Minimum Element = %d\n",Retrieve(P));

	P = FindMax(T);
	printf("Maksimum Element =  %d\n",Retrieve(P));

	T = Insert(1, T);
	printf("Node with element 1 is added to the tree");

	P = FindMin(T);
	printf("\nMinimum Element is changed to = %d\n.",Retrieve(P));

	if((P = Find(27,T)) != NULL){
		printf("Node with element 27 is found.\n",Retrieve(P));
	}

	else{
		printf("Node element with 27 is NOT found.\n");
	}

	printf("Node with element 25 will be deleted.\n", Delete(25, T));

	P = FindMax(T);
	printf("Maksimum Element is changed to =  %d\n",Retrieve(P));

	P = FindMinIterative(T);
	printf("Finding minimum element using FindMinIterative:\n");
	printf("Minimum element = %d",Retrieve(P));

	//printf("\nTinggi dari Tree : %d\n",GetDepth(T));
	//printf("\nBanyak Daun : %d\n",BanyakDaun(T));
	//printf("Jumlah Daun : %d\n",JumlahDaun(T));
	//printf("\nJumlah Element Pada tree : %d\n",SumOfElement(T));
	//printf("Banyak Element Pada tree : %d\n",BanyakElement(T));

	return 0;
}



