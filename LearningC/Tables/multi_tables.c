/***********************************
/* MMIR01. Multidimensional tables
/* How to work with the identifier
/* of a multi table.
************************************/

#include <stdio.h>

int main()
{
    //tab is a table of 2 tables. Eache table contains 3 integers
	int tab[2][3] = { 1, 2, 3, 4, 5, 6};
	//Initialization. Other options. 
	//int tab[2][3] = { {1, 2, 3}, {4, 5, 6}};
	//int tab[][3] = { {1, 2, 3}, {4, 5, 6}};
	
	printf("Print the last element in diferents ways:\n");
	printf("OP1: %d\n", tab[1][2]);
	printf("OP2: %d\n", (*(tab+1))[2]);
	printf("OP3: %d\n", *(*(tab+1)+2));
	printf("OP4: %d\n", *(tab[1]+2));
    
    return 0;
}