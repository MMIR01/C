/***********************************
MMIR01. Dynamic Memory Allocation
Multidimensional tables (II)
************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 2
#define M 3

int main()
{
	//OP.2
	int ** pTable = NULL;
	int i = 0;
	int j = 0;
	
	//Allocate memory for a table of pointers to table
	pTable = (int **) calloc(N, sizeof(int*));
	
	for (i=0;(pTable != NULL) && (i<M);i++){
		//Allocate memory for a table of int
		pTable[i] = (int*) calloc(M,sizeof(int));
		if(pTable[i]==NULL){
			//Release memory allocated
			for(j=i-1;j>=0;j--)
				free(pTable[j]);
			free(pTable);
			pTable = NULL;
		}
	}
	
	if (pTable == NULL)
		printf("No memory allocated");
	else{
		printf("Memory allocated\n");
		//Access to the first element
		//pTable[0] = 1;
		pTable[0][0] = 1;
		
		/*Access to other elements of the table
		like multidimensional tables*/
		*(pTable[0]+1) = 2;
		pTable[0][2] = 3;
		(*(pTable+1))[0] = 4;
		*(*(pTable+1)+1) = 5;
		*(*(pTable+1)+2) = 6;

		//Print all the values (0 = default)
		for (i=0;i<N;i++){
			for (j=0;j<M;j++)
				printf("Value [%d][%d]: %d\n", i, j, pTable[i][j]);
		}
		
		//Release Memory
		for (i=0; i<M; i++)
			free(pTable[i]);
		free(pTable);
		pTable = NULL;
	}
	
	return 0;
}