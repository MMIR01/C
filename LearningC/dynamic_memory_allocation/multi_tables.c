/***********************************
MMIR01. Dynamic Memory Allocation
Multidimensional tables (I)
************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 2
#define M 3

int main()
{
	//OP.1
	int * pTable = NULL;
	int i = 0;
	int j = 0;
	
	pTable = (int *) calloc(N*M, sizeof(int));
	
	if (pTable == NULL)
		printf("No memory allocated");
	else{
		printf("Memory allocated\n");
		//Access to the first element
		pTable[0] = 1;
		/*Access to other elements of the table
		pTable[row*ncolumns + column]*/
		pTable[0*M+1] = 2;
		pTable[0*M+2] = 3;
		pTable[1*M+0] = 4;
		pTable[1*M+1] = 5;
		pTable[1*M+2] = 6;

		//Print all the values (0 = default)
		for (i=0;i<N;i++){
			for (j=0;j<M;j++)
				printf("Value [%d][%d]: %d\n", i, j, pTable[i*M+j]);
		}
		
		//Release Memory
		free(pTable);
		pTable = NULL;
	}
	
	return 0;
}