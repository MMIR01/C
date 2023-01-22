/***********************************
MMIR01. Learn a bit more about
pointers
************************************/

#include <stdio.h>

int main()
{
	int integer = 15;
	
	//Pointer to integer
	int * pint = &integer;
	
	printf("Value of the integer: %d\n", integer);
	printf("Same value using the pointer: %d\n", *pint);
	
	// Pointer to pointer integer
	int ** ppint = &pint;
	
	printf("pint has he value: %p\n", pint);
	printf("Same value using ppint: %p\n", *ppint);
	
	printf("\nModifying the value of the integer\n");
	integer = 7;
	printf("By using integer: %d\n", integer);
	*pint = 10;
	printf("By using pint: %d\n", *pint);
	**ppint = 12;
	printf("By using ppint: %d\n", **ppint);
	
	return 0;
}